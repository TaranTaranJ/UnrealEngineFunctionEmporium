// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaranFunctionEmporium.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UStaticMeshComponent;
#ifdef TARANS_TOOLS_TaranFunctionEmporium_generated_h
#error "TaranFunctionEmporium.generated.h already included, missing '#pragma once' in TaranFunctionEmporium.h"
#endif
#define TARANS_TOOLS_TaranFunctionEmporium_generated_h

#define FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLightmapResolutionASSET); \
	DECLARE_FUNCTION(execSetLightmapResolution); \
	DECLARE_FUNCTION(execGetLightmapResolution_Asset); \
	DECLARE_FUNCTION(execGetLightmapResolution_Actor);


#define FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaranFunctionEmporium(); \
	friend struct Z_Construct_UClass_UTaranFunctionEmporium_Statics; \
public: \
	DECLARE_CLASS(UTaranFunctionEmporium, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tarans_Tools"), NO_API) \
	DECLARE_SERIALIZER(UTaranFunctionEmporium)


#define FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaranFunctionEmporium(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaranFunctionEmporium(UTaranFunctionEmporium&&); \
	UTaranFunctionEmporium(const UTaranFunctionEmporium&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaranFunctionEmporium); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaranFunctionEmporium); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaranFunctionEmporium) \
	NO_API virtual ~UTaranFunctionEmporium();


#define FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_13_PROLOG
#define FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_INCLASS_NO_PURE_DECLS \
	FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARANS_TOOLS_API UClass* StaticClass<class UTaranFunctionEmporium>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
