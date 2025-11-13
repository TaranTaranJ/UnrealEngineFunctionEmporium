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

    /** Returns the lightmap resolution of a Static Mesh Component (override or default) */
    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "get_LMR"))
    static int32 GetLightmapResolution(UStaticMeshComponent* MeshComp);

    /** Set the lightmap resolution of a Static Mesh Component (override or default) */
    UFUNCTION(BlueprintCallable, Category = "Taran Tools|Lighting", meta = (CompactNodeTitle = "Set_LMR"))
    static void SetLightmapResolution(UStaticMeshComponent* MeshComp, int32 NewResolution);
};
