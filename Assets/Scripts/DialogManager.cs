using TMPro;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.UI;

public class DialogManager : MonoBehaviour
{
    public GameObject videoPlayer;
    public GameObject title;
    public GameObject text;
    public GameObject dialogObject;  // Reference to the dialog GameObject
    public GameObject controlUI;     // Reference to the control UI GameObject
    public GameObject attention;
    private VideoPlayer _clip;
    private TextMeshProUGUI _title;
    private TextMeshProUGUI _text;
    public GameObject mirroredAvatar;

    public VideoClip[] clips;
    public string[] titles;
    public string[] textContents;
    private int currentDialogIndex = 0; 

    public Toggle next;
   
    void Start()
    {
        _clip = videoPlayer.GetComponent<VideoPlayer>();
        _title = title.GetComponent<TextMeshProUGUI>();
        _text = text.GetComponent<TextMeshProUGUI>();

        UpdateDialog();

       
        next.onValueChanged.AddListener((isOn) => { if (isOn)  ShowNextDialog(); });
    }

    
    public void ShowNextDialog()
    {
        if (currentDialogIndex < clips.Length - 1)
        {
            currentDialogIndex++;
            UpdateDialog();
        }
        else
        {
            // Transition to control UI only if we're at the last dialog
            EndDialogSequence();
        }
    }

    void UpdateDialog()
    {
        if (currentDialogIndex >= 0 && currentDialogIndex < clips.Length)
        {
            videoPlayer.SetActive(true);
            _clip.clip = clips[currentDialogIndex];
            _clip.Play();
        }
        else
        {
            videoPlayer.SetActive(false);
        }
        
        if (titles != null && currentDialogIndex < titles.Length)
        {
            _title.text = titles[currentDialogIndex];
        }
        else
        {
            _title.text = ""; 
        }

        if (textContents != null && currentDialogIndex < textContents.Length)
        {
            _text.text = textContents[currentDialogIndex];
        }
        else
        {
            _text.text = ""; 
        }
        
        dialogObject.SetActive(true);
        controlUI.SetActive(false);
    }

    private void EndDialogSequence()
    {
        // Hide the dialog UI and show the control UI
        dialogObject.SetActive(false);  // Hide the dialog object
        controlUI.SetActive(true);      // Show the control UI
        attention.SetActive(true);
        mirroredAvatar.SetActive(true);
    }
}