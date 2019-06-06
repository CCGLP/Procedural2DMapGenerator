using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;
using Procedural2DGenerator;
using UnityEngine.Tilemaps;
using UnityEditor.SceneManagement;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;

public class MapCreatorWindow : EditorWindow
{

    private static ProceduralDataObject data;
    private static Area previousArea; 
    Slider sliderX, sliderY;
    Label sizeXText, sizeYText;
    Box parentMapSpecificData;
    EnumField enumFieldMap;
    int iterationsDrunkard = 5000;
    int minRooms = 4;
    int maxRooms = 10;
    int minWidth = 1;
    int minHeight = 1; 

    [MenuItem("Tools/ProceduralGenerator++/MapCreator")]
    public static void ShowExample()
    {
        MapCreatorWindow wnd = GetWindow<MapCreatorWindow>();
        wnd.titleContent = new GUIContent("TestWindow");
    }

    public void OnEnable()
    {
        #region Initialization
        if (data == null)
        {
            data = Resources.Load<ProceduralDataObject>("data");
        }
        // Each editor window contains a root VisualElement object
        VisualElement root = rootVisualElement;



        // Import UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Procedural++/Editor/MapCreatorWindow.uxml");
        VisualElement uxml = visualTree.CloneTree();

       
        //Import Stylesheet
        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Procedural++/Editor/MapCreatorWindow.uss");
        uxml.styleSheets.Add(styleSheet);
        root.Add(uxml);

        #endregion

        #region Buttons
        Button createButton = root.Query<Button>("createMap");
        createButton.clickable.clicked += () => {

            switch ((MapType)enumFieldMap.value)
            {
                case MapType.RandomNoise:
                    previousArea = Procedural2DHelper.CreateRandomNoiseArea((int)sliderX.value, (int)sliderY.value,0,0); 
                    break;

                case MapType.Drunkard:
                    previousArea = Procedural2DHelper.CreateDrunkardWalkArea((int)sliderX.value, (int)sliderY.value,0, 0, iterationsDrunkard);
                    break;

                case MapType.BSPDungeon:
                    previousArea = Procedural2DHelper.CreateBSPDungeonArea((int)sliderX.value, (int)sliderY.value, 0, 0, minRooms, maxRooms, minWidth, minHeight); 
                    break; 
            }

           
            MapDrawer.DrawMapWithTileMap(previousArea);

            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene()); 
        };

        Button clearButton = root.Query<Button>("clearMap");
        clearButton.clickable.clicked += () =>
        {
            MapDrawer.ClearTileMap(); 
        };

        Button saveButton = root.Query<Button>("saveMap");
        
        saveButton.clickable.clicked += () =>
        {
            if (previousArea.tileInfo != null)
            {
                string name = EditorUtility.SaveFilePanel("Save map", "./Assets", "DataMap", "bin");
                if (name != null)
                {
                    IFormatter formatter = new BinaryFormatter();
                    Stream stream = new FileStream(name, FileMode.Create, FileAccess.Write, FileShare.None);
                    formatter.Serialize(stream, previousArea);
                    stream.Close();
                }
            }
            else
            {
                Debug.Log("Generate an Area before saving!"); 
            }
        };


        Button loadButton = root.Query<Button>("loadMap");
        loadButton.clickable.clicked += () =>
         {
             string name = EditorUtility.OpenFilePanel("Load Map", "./Assets", "bin");
             if (name != null)
             {
                 IFormatter formatter = new BinaryFormatter();
                 Stream stream = new FileStream(name, FileMode.Open, FileAccess.Read, FileShare.Read);
                 previousArea = (Area)formatter.Deserialize(stream);
                 MapDrawer.DrawMapWithTileMap(previousArea); 
                 stream.Close();
             }
         };

        #endregion

        #region SizeSliders
        sliderX = root.Query<Slider>("sizeX");
        sizeXText = root.Query<Label>("sizeXText");
        sizeXText.text = ((int)sliderX.value).ToString() + " size X"; 
        sliderX.RegisterValueChangedCallback((t) =>
        {
            sizeXText.text = ((int)t.newValue).ToString() + " size X"; 
        });

        sliderY = root.Query<Slider>("sizeY");
        sizeYText = root.Query<Label>("sizeYText");
        sizeYText.text = ((int)sliderY.value).ToString() + " size Y";

        sliderY.RegisterValueChangedCallback((t) =>
        {
            sizeYText.text = ((int)t.newValue).ToString() + " size Y"; 
        });

        #endregion

        #region Default General Data
        ObjectField field = root.Query<ObjectField>("tileColision");
        field.objectType = typeof(Tile);
        field.value = data.defaultCollisionTile;

        ObjectField fieldFloor = root.Query<ObjectField>("tileFloor");
        fieldFloor.objectType = typeof(Tile);
        fieldFloor.value = data.defaultFreeTile;

        field.RegisterValueChangedCallback((t) =>
        {
            data.defaultCollisionTile = (Tile) t.newValue; 
        });

        fieldFloor.RegisterValueChangedCallback((t) =>
        {
            data.defaultFreeTile = (Tile)t.newValue;
        });


        Toggle toggle = root.Query<Toggle>("autoClear");
        toggle.value = data.autoClearTileMap;
        toggle.RegisterValueChangedCallback((t) =>
        {
            data.autoClearTileMap = t.newValue; 
        });

        #endregion

        #region Map Specific Data
        parentMapSpecificData = root.Query<Box>("rootMapSpecific");
        Slider iterations = new Slider(5000, 1000000);
        iterations.label = "Iterations (5000)";
        iterations.value = iterationsDrunkard;
        iterations.RegisterValueChangedCallback((t) =>
        {
            iterations.label = "Iterations (" + (int)t.newValue + ")";
            iterationsDrunkard = (int)t.newValue; 
        });
        parentMapSpecificData.Add(iterations);



        enumFieldMap = root.Query<EnumField>("mapSelector");
        enumFieldMap.Init(MapType.Drunkard);
        enumFieldMap.RegisterValueChangedCallback((t) =>
        {
            var newValue = (MapType)t.newValue;

            switch (newValue)
            {
                case MapType.RandomNoise:
                    RemoveChildsFromMapSpecificParent(); 
                    break;

                case MapType.Drunkard:
                    DrunkardEnumSwitch(); 
                    break;

                case MapType.BSPDungeon:
                    BSPDungeonSwitch(); 
                    break; 
            }
        });

        #endregion
    }




    private void RemoveChildsFromMapSpecificParent()
    {
        int childLength = parentMapSpecificData.childCount;
        for (int i = 1; i < childLength; i++)
        {
            parentMapSpecificData.RemoveAt(1); 
        }
    }
    private void DrunkardEnumSwitch()
    {
        RemoveChildsFromMapSpecificParent(); 
        Slider iterations = new Slider(5000, 10000000);
        iterations.value = 5000; 
        iterations.label = "Iterations(5000)";
        iterations.RegisterValueChangedCallback((p) =>
        {
            iterations.label = "Iterations (" + (int)p.newValue + ")";
            iterationsDrunkard = (int)p.newValue;
        });
        parentMapSpecificData.Add(iterations);
    }
    private void BSPDungeonSwitch()
    {
        RemoveChildsFromMapSpecificParent();
        Slider minRooms = new Slider(4, 3000);
        Slider maxRooms = new Slider(10, 10000);
        Slider minWidth = new Slider(1, 1000);
        Slider minHeight = new Slider(1, 1000);

        minRooms.label = "Min Rooms(4)";
        maxRooms.label = "Max Rooms(10)";
        minWidth.label = "Min Width(1)";
        minHeight.label = "Min Height(1)";

        minRooms.RegisterValueChangedCallback(t =>
        {
            minRooms.label = "Min Rooms(" + (int) t.newValue + ")";
            this.minRooms = (int)t.newValue; 
            if (this.minRooms > this.maxRooms)
            {
                this.maxRooms = this.minRooms + 1;
                maxRooms.value = this.minRooms + 1;
                maxRooms.label = "Max Rooms(" + this.maxRooms + ")"; 
            }
        });

        maxRooms.RegisterValueChangedCallback(t =>
        {
            maxRooms.label = "Max Rooms(" + (int)t.newValue + ")";
            this.maxRooms = (int)t.newValue; 
            if (this.maxRooms < this.minRooms)
            {
                this.minRooms = this.maxRooms - 1;
                minRooms.value = this.maxRooms - 1;
                minRooms.label = "Min Rooms(" + this.minRooms + ")"; 
            }
            
        });

        minWidth.RegisterValueChangedCallback(t =>
        {
            minWidth.label = "Min Width(" + (int)t.newValue + ")";
            this.minWidth = (int)t.newValue; 
        });

        minHeight.RegisterValueChangedCallback(t =>
        {
            minHeight.label = "Min Height(" + (int)t.newValue + ")";
            this.minHeight = (int)t.newValue; 
        });

        parentMapSpecificData.Add(minRooms);
        parentMapSpecificData.Add(maxRooms);
        parentMapSpecificData.Add(minWidth);
        parentMapSpecificData.Add(minHeight); 
    }
}