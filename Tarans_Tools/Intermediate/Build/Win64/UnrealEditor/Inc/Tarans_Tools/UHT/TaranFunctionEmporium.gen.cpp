// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tarans_Tools/Public/TaranFunctionEmporium.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaranFunctionEmporium() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TARANS_TOOLS_API UClass* Z_Construct_UClass_UTaranFunctionEmporium();
TARANS_TOOLS_API UClass* Z_Construct_UClass_UTaranFunctionEmporium_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tarans_Tools();
// End Cross Module References

// Begin Class UTaranFunctionEmporium Function GetLightmapResolution_Actor
struct Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics
{
	struct TaranFunctionEmporium_eventGetLightmapResolution_Actor_Parms
	{
		UStaticMeshComponent* MeshComp;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Taran Tools|Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the lightmap resolution of a Actors Static Mesh Component (override or default) */" },
#endif
		{ "CompactNodeTitle", "get_LMR_Actor" },
		{ "ModuleRelativePath", "Public/TaranFunctionEmporium.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the lightmap resolution of a Actors Static Mesh Component (override or default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventGetLightmapResolution_Actor_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventGetLightmapResolution_Actor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaranFunctionEmporium, nullptr, "GetLightmapResolution_Actor", nullptr, nullptr, Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::TaranFunctionEmporium_eventGetLightmapResolution_Actor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::TaranFunctionEmporium_eventGetLightmapResolution_Actor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaranFunctionEmporium::execGetLightmapResolution_Actor)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTaranFunctionEmporium::GetLightmapResolution_Actor(Z_Param_MeshComp);
	P_NATIVE_END;
}
// End Class UTaranFunctionEmporium Function GetLightmapResolution_Actor

// Begin Class UTaranFunctionEmporium Function GetLightmapResolution_Asset
struct Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics
{
	struct TaranFunctionEmporium_eventGetLightmapResolution_Asset_Parms
	{
		UStaticMeshComponent* MeshComp;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Taran Tools|Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the lightmap resolution of an Assets Static Mesh Component (override or default) */" },
#endif
		{ "CompactNodeTitle", "get_LMR_Asset" },
		{ "ModuleRelativePath", "Public/TaranFunctionEmporium.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the lightmap resolution of an Assets Static Mesh Component (override or default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventGetLightmapResolution_Asset_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventGetLightmapResolution_Asset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaranFunctionEmporium, nullptr, "GetLightmapResolution_Asset", nullptr, nullptr, Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::TaranFunctionEmporium_eventGetLightmapResolution_Asset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::TaranFunctionEmporium_eventGetLightmapResolution_Asset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaranFunctionEmporium::execGetLightmapResolution_Asset)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTaranFunctionEmporium::GetLightmapResolution_Asset(Z_Param_MeshComp);
	P_NATIVE_END;
}
// End Class UTaranFunctionEmporium Function GetLightmapResolution_Asset

// Begin Class UTaranFunctionEmporium Function SetLightmapResolution
struct Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics
{
	struct TaranFunctionEmporium_eventSetLightmapResolution_Parms
	{
		UStaticMeshComponent* MeshComp;
		int32 NewResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Taran Tools|Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the lightmap resolution of a Static Mesh Component (override or default) */" },
#endif
		{ "CompactNodeTitle", "Set_LMR_Actor" },
		{ "ModuleRelativePath", "Public/TaranFunctionEmporium.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the lightmap resolution of a Static Mesh Component (override or default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventSetLightmapResolution_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::NewProp_NewResolution = { "NewResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventSetLightmapResolution_Parms, NewResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::NewProp_NewResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaranFunctionEmporium, nullptr, "SetLightmapResolution", nullptr, nullptr, Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::TaranFunctionEmporium_eventSetLightmapResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::TaranFunctionEmporium_eventSetLightmapResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaranFunctionEmporium::execSetLightmapResolution)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTaranFunctionEmporium::SetLightmapResolution(Z_Param_MeshComp,Z_Param_NewResolution);
	P_NATIVE_END;
}
// End Class UTaranFunctionEmporium Function SetLightmapResolution

// Begin Class UTaranFunctionEmporium Function SetLightmapResolutionASSET
struct Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics
{
	struct TaranFunctionEmporium_eventSetLightmapResolutionASSET_Parms
	{
		UStaticMesh* Mesh;
		int32 NewResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Taran Tools|Lighting" },
		{ "CompactNodeTitle", "Set_LMR_Asset" },
		{ "ModuleRelativePath", "Public/TaranFunctionEmporium.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventSetLightmapResolutionASSET_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::NewProp_NewResolution = { "NewResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaranFunctionEmporium_eventSetLightmapResolutionASSET_Parms, NewResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::NewProp_NewResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaranFunctionEmporium, nullptr, "SetLightmapResolutionASSET", nullptr, nullptr, Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::TaranFunctionEmporium_eventSetLightmapResolutionASSET_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::TaranFunctionEmporium_eventSetLightmapResolutionASSET_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaranFunctionEmporium::execSetLightmapResolutionASSET)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTaranFunctionEmporium::SetLightmapResolutionASSET(Z_Param_Mesh,Z_Param_NewResolution);
	P_NATIVE_END;
}
// End Class UTaranFunctionEmporium Function SetLightmapResolutionASSET

// Begin Class UTaranFunctionEmporium
void UTaranFunctionEmporium::StaticRegisterNativesUTaranFunctionEmporium()
{
	UClass* Class = UTaranFunctionEmporium::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLightmapResolution_Actor", &UTaranFunctionEmporium::execGetLightmapResolution_Actor },
		{ "GetLightmapResolution_Asset", &UTaranFunctionEmporium::execGetLightmapResolution_Asset },
		{ "SetLightmapResolution", &UTaranFunctionEmporium::execSetLightmapResolution },
		{ "SetLightmapResolutionASSET", &UTaranFunctionEmporium::execSetLightmapResolutionASSET },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaranFunctionEmporium);
UClass* Z_Construct_UClass_UTaranFunctionEmporium_NoRegister()
{
	return UTaranFunctionEmporium::StaticClass();
}
struct Z_Construct_UClass_UTaranFunctionEmporium_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TaranFunctionEmporium.h" },
		{ "ModuleRelativePath", "Public/TaranFunctionEmporium.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Actor, "GetLightmapResolution_Actor" }, // 1192805628
		{ &Z_Construct_UFunction_UTaranFunctionEmporium_GetLightmapResolution_Asset, "GetLightmapResolution_Asset" }, // 517448561
		{ &Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolution, "SetLightmapResolution" }, // 2125143253
		{ &Z_Construct_UFunction_UTaranFunctionEmporium_SetLightmapResolutionASSET, "SetLightmapResolutionASSET" }, // 1878809325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaranFunctionEmporium>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaranFunctionEmporium_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Tarans_Tools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaranFunctionEmporium_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaranFunctionEmporium_Statics::ClassParams = {
	&UTaranFunctionEmporium::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaranFunctionEmporium_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaranFunctionEmporium_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaranFunctionEmporium()
{
	if (!Z_Registration_Info_UClass_UTaranFunctionEmporium.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaranFunctionEmporium.OuterSingleton, Z_Construct_UClass_UTaranFunctionEmporium_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaranFunctionEmporium.OuterSingleton;
}
template<> TARANS_TOOLS_API UClass* StaticClass<UTaranFunctionEmporium>()
{
	return UTaranFunctionEmporium::StaticClass();
}
UTaranFunctionEmporium::UTaranFunctionEmporium(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaranFunctionEmporium);
UTaranFunctionEmporium::~UTaranFunctionEmporium() {}
// End Class UTaranFunctionEmporium

// Begin Registration
struct Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaranFunctionEmporium, UTaranFunctionEmporium::StaticClass, TEXT("UTaranFunctionEmporium"), &Z_Registration_Info_UClass_UTaranFunctionEmporium, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaranFunctionEmporium), 1790523360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_3197057645(TEXT("/Script/Tarans_Tools"),
	Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_TaranFunctionEmporium_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
