using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetScene : MonoBehaviour
{
    public string sceneToLoad = "SampleScene";
    
   
    public void resetScene()
    {
        //reset scene
        SceneManager.LoadScene(sceneToLoad);
    }
}
