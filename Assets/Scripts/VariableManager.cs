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
    public Toggle textureDetailToggleLow, textureDetailToggleMedium, textureDetailToggleHigh;
    public Toggle subtleEyeMotionToggleLow, subtleEyeMotionToggleMedium, subtleEyeMotionToggleHigh;

    public Material[] lowDetailMaterials, mediumDetailMaterials, highDetailMaterials;

    private GameObject mirroredObject;
    private MeshRenderer mirroredRenderer;

    public AudioClip toggleSelectSound;
    private AudioSource audioSource;

    // Track the previous states of each toggle to play sound only on change
    private bool prevMultiplierLow, prevMultiplierMedium, prevMultiplierHigh;
    private bool prevTextureLow, prevTextureMedium, prevTextureHigh;
    private bool prevEyeMotionLow, prevEyeMotionMedium, prevEyeMotionHigh;

    private void Start()
    {
        if (headObject != null)
        {
            correctivesFaceHead = headObject.GetComponent<AvatarFaceCorrectively>();
        }

        if (mouthObject != null)
        {
            correctivesFaceMouth = mouthObject.GetComponent<AvatarFaceCorrectively>();
        }
        audioSource = GetComponent<AudioSource>();
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
        // Blend Shape Multiplier Toggles
        if (multiplierToggleLow.isOn && !prevMultiplierLow)
        {
            UpdateBlendShapeMultiplier(100f);
            PlayToggleSound();
        }
        prevMultiplierLow = multiplierToggleLow.isOn;

        if (multiplierToggleMedium.isOn && !prevMultiplierMedium)
        {
            UpdateBlendShapeMultiplier(120f);
            PlayToggleSound();
        }
        prevMultiplierMedium = multiplierToggleMedium.isOn;

        if (multiplierToggleHigh.isOn && !prevMultiplierHigh)
        {
            UpdateBlendShapeMultiplier(140f);
            PlayToggleSound();
        }
        prevMultiplierHigh = multiplierToggleHigh.isOn;

        // Texture Detail Toggles
        if (textureDetailToggleLow.isOn && !prevTextureLow)
        {
            UpdateMaterial(lowDetailMaterials);
            PlayToggleSound();
        }
        prevTextureLow = textureDetailToggleLow.isOn;

        if (textureDetailToggleMedium.isOn && !prevTextureMedium)
        {
            UpdateMaterial(mediumDetailMaterials);
            PlayToggleSound();
        }
        prevTextureMedium = textureDetailToggleMedium.isOn;

        if (textureDetailToggleHigh.isOn && !prevTextureHigh)
        {
            UpdateMaterial(highDetailMaterials);
            PlayToggleSound();
        }
        prevTextureHigh = textureDetailToggleHigh.isOn;

        // Subtle Eye Motion Toggles
        if (subtleEyeMotionToggleLow.isOn && !prevEyeMotionLow)
        {
            UpdateBlinkParameters(2.5f, 5f, 0.1f);
            PlayToggleSound();
        }
        prevEyeMotionLow = subtleEyeMotionToggleLow.isOn;

        if (subtleEyeMotionToggleMedium.isOn && !prevEyeMotionMedium)
        {
            UpdateBlinkParameters(1.5f, 4f, 0.15f);
            PlayToggleSound();
        }
        prevEyeMotionMedium = subtleEyeMotionToggleMedium.isOn;

        if (subtleEyeMotionToggleHigh.isOn && !prevEyeMotionHigh)
        {
            UpdateBlinkParameters(1f, 3f, 0.2f);
            PlayToggleSound();
        }
        prevEyeMotionHigh = subtleEyeMotionToggleHigh.isOn;
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

    private void UpdateMaterial(Material[] newMaterials)
    {
        if (mirroredRenderer != null)
        {
            Material[] materials = mirroredRenderer.sharedMaterials;
            for (int i = 0; i < newMaterials.Length; i++)
            {
                materials[i] = newMaterials[i];
            }
            mirroredRenderer.sharedMaterials = materials;
            //Debug.Log($"Material changed to: {newMaterial.name}");
            mirroredRenderer.enabled = false;
            mirroredRenderer.enabled = true;
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