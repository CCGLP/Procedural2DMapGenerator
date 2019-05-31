using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;


public class TestWindow : EditorWindow
{
    [MenuItem("Window/UIElements/TestWindow")]
    public static void ShowExample()
    {
        TestWindow wnd = GetWindow<TestWindow>();
        wnd.titleContent = new GUIContent("TestWindow");
    }

    public void OnEnable()
    {
        // Each editor window contains a root VisualElement object
        VisualElement root = rootVisualElement;



        // Import UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/TestWindow.uxml");
        VisualElement uxml = visualTree.CloneTree();


        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Editor/TestWindow.uss");
        uxml.styleSheets.Add(styleSheet);

        root.Add(uxml);

        Button b = root.Query<Button>("Roberto");
        b.clickable.clicked += () => { Debug.Log("ROBERTOS"); }; 
    }
}