// Fill out your copyright notice in the Description page of Project Settings.


#include "TaranFunctionEmporium.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"


int32 UTaranFunctionEmporium::GetLightmapResolution(UStaticMeshComponent* MeshComp)
{
    if (!MeshComp)
        return 0;

    if (MeshComp->OverriddenLightMapRes > 0)
        return MeshComp->OverriddenLightMapRes;

    if (UStaticMesh* Mesh = MeshComp->GetStaticMesh())
        return Mesh->GetLightMapResolution();

    return 0;
}

//Currently sets the overidden Lightmap Resolution but does not set it to be in the overide state
void UTaranFunctionEmporium::SetLightmapResolution(UStaticMeshComponent* MeshComp, int32 NewResolution)
{
    if (!MeshComp || NewResolution == 0)
        return;
    
    // Enable use of the overridden lightmap resolution
    MeshComp->bOverrideLightMapRes = true;

    // Set a per-instance override for lightmap resolution
    MeshComp->OverriddenLightMapRes = NewResolution;

#if WITH_EDITOR
    // Mark the component as modified so the editor knows it needs to rebuild lighting
    MeshComp->Modify();
    MeshComp->PostEditChange();
#endif

    UE_LOG(LogTemp, Log, TEXT("%s lightmap resolution set to %d"),
        *MeshComp->GetName(), NewResolution);
}