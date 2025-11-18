// Fill out your copyright notice in the Description page of Project Settings.


#include "TaranFunctionEmporium.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "math.h"


int32 UTaranFunctionEmporium::GetLightmapResolution_Actor(UStaticMeshComponent* MeshComp)
{
    if (!MeshComp)
        return 0;

    if (MeshComp->OverriddenLightMapRes > 0)
        return MeshComp->OverriddenLightMapRes;

    if (UStaticMesh* Mesh = MeshComp->GetStaticMesh())
        return Mesh->GetLightMapResolution();

    return 0;
}

int32 UTaranFunctionEmporium::GetLightmapResolution_Asset(UStaticMeshComponent* MeshComp)
{
    if (!MeshComp)
        return 0;

    if (MeshComp->OverriddenLightMapRes > 0)
        return MeshComp->OverriddenLightMapRes;

    if (UStaticMesh* Mesh = MeshComp->GetStaticMesh())
        return Mesh->UStaticMesh::GetLightMapResolution();

    return 0;
}

//Currently sets the overidden Lightmap Resolution but does not set it to be in the overide state
void UTaranFunctionEmporium::SetLightmapResolution(UStaticMeshComponent* MeshComp, int32 NewResolution)
{
    if (MeshComp == nullptr)
    {
        UE_LOG(LogCore, Error, TEXT("ERROR - Mesh component not found"), __FUNCTION__);
        return;
    }

    if (!MeshComp || NewResolution == 0)
        return;
    
    // Enable use of the overridden lightmap resolution
    MeshComp->bOverrideLightMapRes = true;

    // Set a per-instance override for lightmap resolution
    MeshComp->OverriddenLightMapRes = NewResolution;


    // My effort to update the actor after being overidden. (Not working)
    // Mark the component as modified so the editor knows it needs to rebuild lighting
    MeshComp->Modify();
    MeshComp->PostEditChange();
    
    UE_LOG(LogTemp, Log, TEXT("%s lightmap resolution set to %d"),
        *MeshComp->GetName(), NewResolution);


    /** Trying to implement Luna Simpson's feedback/ code. **/

    // Tell the Lighting system the component's lighting state is no longer valid.
    MeshComp->InvalidateLightingCache();
    // Tell the component it needs saving.
    MeshComp->MarkPackageDirty(); // test without this line.
}

//Currently sets the overidden Lightmap Resolution but does not set it to be in the overide state
void UTaranFunctionEmporium::SetLightmapResolutionASSET(UStaticMesh* Mesh, int32 NewResolution)
{
    if (Mesh == nullptr)
    {
        UE_LOG(LogCore, Error, TEXT("ERROR - Mesh component not found"), __FUNCTION__);
        return;
    }

    if (!Mesh || NewResolution == 0)
        return;

    // Mark the component as modified so the editor knows it needs to rebuild lighting
    Mesh->Modify();
    // Enable use of the overridden lightmap resolution
    Mesh->SetLightMapResolution(NewResolution);
    Mesh->PostEditChange();

    UE_LOG(LogTemp, Log, TEXT("%s lightmap resolution set to %d"),
        *Mesh->GetName(), NewResolution);
}