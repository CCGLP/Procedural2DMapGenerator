using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;
using Procedural2DGenerator;
using UnityEngine.Tilemaps;
using UnityEditor.SceneManagement;  

public class TestWindow : EditorWindow
{

    private static ProceduralDataObject data;
    Slider sliderX, sliderY;
    Label sizeXText, sizeYText;
    Box parentDefault;
    EnumField enumFieldMap;
    int iterationsDrunkard = 10000;
    int minRooms = 4;
    int maxRooms = 10;
    int minWidth = 1;
    int minHeight = 1; 

    [MenuItem("Window/UIElements/TestWindow")]
    public static void ShowExample()
    {
        TestWindow wnd = GetWindow<TestWindow>();
        wnd.titleContent = new GUIContent("TestWindow");
    }

    public void OnEnable()
    {
        data = Resources.Load<ProceduralDataObject>("data"); 
        // Each editor window contains a root VisualElement object
        VisualElement root = rootVisualElement;



        // Import UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/TestWindow.uxml");
        VisualElement uxml = visualTree.CloneTree();

       
        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Editor/TestWindow.uss");
        uxml.styleSheets.Add(styleSheet);

        root.Add(uxml);

        Button createButton = root.Query<Button>("createMap");
        createButton.clickable.clicked += () => {

            Area area = new Area(); 
            switch ((MapType)enumFieldMap.value)
            {
                case MapType.RandomNoise:
                    area = Procedural2DHelper.CreateRandomNoiseArea((int)sliderX.value, (int)sliderY.value,0,0); 
                    break;

                case MapType.Drunkard:
                    area = Procedural2DHelper.CreateDrunkardWalkArea((int)sliderX.value, (int)sliderY.value,0, 0, iterationsDrunkard);
                    break;

                case MapType.BSPDungeon:
                    area = Procedural2DHelper.CreateBSPDungeonArea((int)sliderX.value, (int)sliderY.value, 0, 0, minRooms, maxRooms, minWidth, minHeight); 
                    break; 
            }

           
            MapDrawer.DrawMapWithTileMap(area);

            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene()); 
        };

        Button clearButton = root.Query<Button>("clearMap");
        clearButton.clickable.clicked += () =>
        {
            MapDrawer.ClearTileMap(); 
        };


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

        ObjectField field = root.Query<ObjectField>("tileColision");
        field.objectType = typeof(Tile);
        field.value = data.defaultCollisionTile;

        ObjectField fieldFloor = root.Query<ObjectField>("tileFloor");
        fieldFloor.objectType = typeof(Tile);
        fieldFloor.value = data.defaultFreeTile;

        field.RegisterValueChangedCallback((t) =>
        {
            Debug.Log("la vida mola"); 
            data.defaultCollisionTile = (Tile) t.newValue; 
        });

        fieldFloor.RegisterValueChangedCallback((t) =>
        {
            Debug.Log("la vida mola bastante");
            data.defaultFreeTile = (Tile)t.newValue;
        });


        Toggle toggle = root.Query<Toggle>("autoClear");
        toggle.value = data.autoClearTileMap;
        toggle.RegisterValueChangedCallback((t) =>
        {
            data.autoClearTileMap = t.newValue; 
        });

       
        parentDefault = root.Query<Box>("rootMapSpecific");
        Slider iterations = new Slider(1000, 10000000);
        iterations.label = "Iterations (1000)";
        iterations.value = iterationsDrunkard;
        iterations.RegisterValueChangedCallback((t) =>
        {
            iterations.label = "Iterations (" + (int)t.newValue + ")";
            iterationsDrunkard = (int)t.newValue; 
        });
        parentDefault.Add(iterations);



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

    }




    private void RemoveChildsFromMapSpecificParent()
    {
        Debug.Log(parentDefault.childCount);
        int childLength = parentDefault.childCount;
        for (int i = 1; i < childLength; i++)
        {
            parentDefault.RemoveAt(1); 
        }
    }
    private void DrunkardEnumSwitch()
    {
        RemoveChildsFromMapSpecificParent(); 
        Slider iterations = new Slider(1000, 10000000);
        iterations.value = 1000; 
        iterations.label = "Iterations(1000)";
        iterations.RegisterValueChangedCallback((p) =>
        {
            iterations.label = "Iterations (" + (int)p.newValue + ")";
            iterationsDrunkard = (int)p.newValue;
        });
        parentDefault.Add(iterations);
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

        parentDefault.Add(minRooms);
        parentDefault.Add(maxRooms);
        parentDefault.Add(minWidth);
        parentDefault.Add(minHeight); 
    }
}