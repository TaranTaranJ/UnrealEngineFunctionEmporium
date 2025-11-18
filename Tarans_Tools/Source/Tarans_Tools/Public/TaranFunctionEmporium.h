#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TaranFunctionEmporium.generated.h"

/**
 * 
 */



UCLASS()
class TARANS_TOOLS_API UTaranFunctionEmporium : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /** Returns the lightmap resolution of a Actors Static Mesh Component (override or default) */
    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "get_LMR_Actor"))
    static int32 GetLightmapResolution_Actor(UStaticMeshComponent* MeshComp);

    /** Returns the lightmap resolution of an Assets Static Mesh Component (override or default) */
    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "get_LMR_Asset"))
    static int32 GetLightmapResolution_Asset(UStaticMeshComponent* MeshComp);

    /** Set the lightmap resolution of a Static Mesh Component (override or default) */
    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "Set_LMR_Actor"))
    static void SetLightmapResolution(UStaticMeshComponent* MeshComp, int32 NewResolution);

    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "Set_LMR_Asset"))
    static void SetLightmapResolutionASSET(UStaticMesh* Mesh, int32 NewResolution);
};
