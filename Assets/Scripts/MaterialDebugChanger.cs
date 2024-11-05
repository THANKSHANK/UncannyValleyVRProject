using UnityEngine;
using System.Collections;

public class MaterialDebugChanger : MonoBehaviour
{
    public Material[] debugMaterials; // Assign multiple materials in the Inspector
    private GameObject mirroredObject;
    private MeshRenderer mirroredRenderer;
    private int currentMaterialIndex = 0; // Track the current material index

    public float changeInterval = 2f; // Time interval between material changes

    void Start()
    {
        // Start the coroutine to periodically change materials
        StartCoroutine(FindMirroredObjectAndChangeMaterial());
    }

    private IEnumerator FindMirroredObjectAndChangeMaterial()
    {
        // Keep trying until the mirrored object is found
        while (mirroredObject == null)
        {
            mirroredObject = GameObject.Find("HighFidelityMirrored_NormalRecalc");//HighFidelityMirrored_NormalRecalc

            if (mirroredObject != null)
            {
                Debug.Log("Mirrored object found!");

                mirroredRenderer = mirroredObject.GetComponent<MeshRenderer>();

                if (mirroredRenderer != null && debugMaterials.Length > 0)
                {
                    // Start periodic material changes
                    StartCoroutine(ChangeMaterialPeriodically());
                    yield break; // Stop the find loop once done
                }
                else
                {
                    Debug.LogError("Renderer or debug materials are missing.");
                }
            }

            yield return new WaitForSeconds(0.1f); // Retry after a short delay
        }

        Debug.LogError("HighFidelityMirrored_NormalRecalc object not found.");
    }

    private IEnumerator ChangeMaterialPeriodically()
    {
        while (true) // Infinite loop to continuously change materials
        {
            // Update to the next material in the array
            UpdateMaterialElement0(debugMaterials[currentMaterialIndex]);

            // Move to the next material index (looping back to the start)
            currentMaterialIndex = (currentMaterialIndex + 1) % debugMaterials.Length;

            // Wait for the specified interval before changing again
            yield return new WaitForSeconds(changeInterval);
        }
    }

    private void UpdateMaterialElement0(Material newMaterial)
    {
        Material[] materials = mirroredRenderer.sharedMaterials;

        // Replace only Element 0
        materials[0] = newMaterial;

        // Reassign the modified materials array
        mirroredRenderer.sharedMaterials = materials;

        // Force a renderer refresh to reflect the changes
        mirroredRenderer.enabled = false;
        mirroredRenderer.enabled = true;

        Debug.Log($"Material 0 changed to: {newMaterial.name}");
    }

    private void LogCurrentMaterials()
    {
        Debug.Log("Logging current materials:");
        Material[] materials = mirroredRenderer.sharedMaterials;
        for (int i = 0; i < materials.Length; i++)
        {
            Debug.Log($"Material Element {i}: {materials[i].name}");
        }
    }
}