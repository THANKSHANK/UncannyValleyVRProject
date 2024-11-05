using System.Collections;
using Oculus.Movement.Tracking;
using UnityEngine;
using UnityEngine.UI;

public class VariableManager : MonoBehaviour
{
    public GameObject headObject;
    public GameObject mouthObject;

    private AvatarFaceCorrectively correctivesFaceHead;
    private AvatarFaceCorrectively correctivesFaceMouth;


    public Toggle multiplierToggleLow, multiplierToggleMedium, multiplierToggleHigh;
    public Toggle textureDetailToggleLow,textureDetailToggleMedium,textureDetailToggleHigh;
    public Toggle subtleEyeMotionToggleLow, subtleEyeMotionToggleMedium, subtleEyeMotionToggleHigh;

    public Material lowDetailMaterial, mediumDetailMaterial, highDetailMaterial;

    private GameObject mirroredObject;
    private MeshRenderer mirroredRenderer;

    public AudioClip toggleSelectSound;
    private AudioSource audioSource;
    
    
    private void Start()
    {
        // Start the coroutine to periodically change materials
        //StartCoroutine(FindMirroredObjectAndChangeMaterial());
        if (headObject != null)
        {
            correctivesFaceHead = headObject.GetComponent<AvatarFaceCorrectively>();
        }

        if (mouthObject != null)
        {
            correctivesFaceMouth = mouthObject.GetComponent<AvatarFaceCorrectively>();
        }
        audioSource = GetComponent<AudioSource>();
        //AddToggleListeners();
       
    }

    private void Update()
    {
       findMirroredObject();
       ToogleListeners();
        
    }

    private void findMirroredObject()
    {
        if (mirroredObject == null)
        {
            mirroredObject = GameObject.Find("HighFidelityMirrored_NormalRecalc");
            if (mirroredObject != null)
            {
                mirroredRenderer = mirroredObject.GetComponent<MeshRenderer>();
            }
        }
    }
    private void ToogleListeners()
    {
        if (multiplierToggleLow.isOn)
        {
            UpdateBlendShapeMultiplier(80f);
        }
        else if (multiplierToggleMedium.isOn)
        {
            UpdateBlendShapeMultiplier(100f);
        }
        else if (multiplierToggleHigh.isOn)
        {
            UpdateBlendShapeMultiplier(120f);
        }

        if (textureDetailToggleLow.isOn)
        {
            UpdateMaterial(lowDetailMaterial);
        }
        else if (textureDetailToggleMedium.isOn)
        {
            UpdateMaterial(mediumDetailMaterial);
        }
        else if (textureDetailToggleHigh.isOn)
        {
            UpdateMaterial(highDetailMaterial);
        }

        if (subtleEyeMotionToggleLow.isOn)
        {
            UpdateBlinkParameters(4f, 8f, 0.2f);
        }
        else if (subtleEyeMotionToggleMedium.isOn)
        {
            UpdateBlinkParameters(2f, 5f, 0.1f);
        }
        else if (subtleEyeMotionToggleHigh.isOn)
        {
            UpdateBlinkParameters(1f, 3f, 0.05f);
        }
    }
    private void AddToggleListeners()
    {
        multiplierToggleLow.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlendShapeMultiplier(80f);
        });

        multiplierToggleMedium.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlendShapeMultiplier(100f);
        });

        multiplierToggleHigh.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlendShapeMultiplier(120f);
        });

        textureDetailToggleLow.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateMaterial(lowDetailMaterial);
        });

        textureDetailToggleMedium.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateMaterial(mediumDetailMaterial);
        });

        textureDetailToggleHigh.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateMaterial(highDetailMaterial);
        });

        subtleEyeMotionToggleLow.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlinkParameters(4f, 8f, 0.2f);
        });

        subtleEyeMotionToggleMedium.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlinkParameters(2f, 5f, 0.1f);
        });

        subtleEyeMotionToggleHigh.onValueChanged.AddListener((isOn) =>
        {
            if (isOn) PlayToggleSound(); UpdateBlinkParameters(1f, 3f, 0.05f);
        });
    }

    private void PlayToggleSound()
    {
        if (audioSource != null && toggleSelectSound != null)
        {
            audioSource.PlayOneShot(toggleSelectSound);
        }
        else
        {
            Debug.LogWarning("AudioSource or ToggleSelectSound is not assigned.");
        }
    }

    private void UpdateMaterial(Material newMaterial)
    {
        Material[] materials = mirroredRenderer.sharedMaterials;
        materials[0] = newMaterial;
        mirroredRenderer.sharedMaterials = materials;
        Debug.Log($"Material changed to: {newMaterial.name}");
        mirroredRenderer.enabled = false;
        mirroredRenderer.enabled = true;
    }

    private IEnumerator UpdateMirroredObjectMaterial(Material newMaterial)
    {
        while (mirroredObject == null)
        {
            mirroredObject = GameObject.Find("HighFidelityMirrored_NormalRecalc");
            if (mirroredObject != null)
            {
                mirroredRenderer = mirroredObject.GetComponent<MeshRenderer>();
                if (mirroredRenderer != null)
                {
                    Material[] materials = mirroredRenderer.sharedMaterials;
                    materials[0] = newMaterial;
                    mirroredRenderer.sharedMaterials = materials;

                    Debug.Log($"Material changed to: {newMaterial.name}");

                    mirroredRenderer.enabled = false;
                    mirroredRenderer.enabled = true;
                    yield break;
                }
            }
            yield return new WaitForSeconds(0.1f);
        }
    }

    private void UpdateBlendShapeMultiplier(float value)
    {
        if (correctivesFaceHead != null)
        {
            correctivesFaceHead.BlendShapeStrengthMultiplier = value;
            Debug.Log($"Head BlendShapeMultiplier set to: {value}");
        }

        if (correctivesFaceMouth != null)
        {
            correctivesFaceMouth.BlendShapeStrengthMultiplier = value;
            Debug.Log($"Mouth BlendShapeMultiplier set to: {value}");
        }
    }

    private void UpdateBlinkParameters(float minInterval, float maxInterval, float duration)
    {
        if (correctivesFaceHead != null)
        {
            correctivesFaceHead.minBlinkInterval = minInterval;
            correctivesFaceHead.maxBlinkInterval = maxInterval;
            correctivesFaceHead.blinkDurationL = duration;
            correctivesFaceHead.blinkDurationR = duration;

            Debug.Log($"Blink parameters updated: Min {minInterval}, Max {maxInterval}, Duration {duration}");
        }

        if (correctivesFaceMouth != null)
        {
            correctivesFaceMouth.minBlinkInterval = minInterval;
            correctivesFaceMouth.maxBlinkInterval = maxInterval;
            correctivesFaceMouth.blinkDurationL = duration;
            correctivesFaceMouth.blinkDurationR = duration;
        }
    }
    

}