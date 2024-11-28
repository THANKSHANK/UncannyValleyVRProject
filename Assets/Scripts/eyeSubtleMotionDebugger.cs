using UnityEngine;

public class eyeSubtleMotionDebugger : MonoBehaviour
{
    public VariableManager variableManager;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            variableManager.UpdateBlinkParameters(2.5f, 5f, 0.1f);
        }
        else if(Input.GetKeyDown(KeyCode.Alpha1))
        {
            variableManager.UpdateBlinkParameters(1.5f, 4f, 0.15f);
        }
        else if(Input.GetKeyDown((KeyCode.Alpha2)))
        {
            variableManager.UpdateBlinkParameters(1f, 3f, 0.2f);
        }
    }
}
