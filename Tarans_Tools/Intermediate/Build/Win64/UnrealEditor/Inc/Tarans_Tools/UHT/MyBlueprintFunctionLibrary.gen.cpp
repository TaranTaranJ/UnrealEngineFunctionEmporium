// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tarans_Tools/Public/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TARANS_TOOLS_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
TARANS_TOOLS_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tarans_Tools();
// End Cross Module References

// Begin Class UMyBlueprintFunctionLibrary
void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Tarans_Tools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMyBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
}
template<> TARANS_TOOLS_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
// End Class UMyBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_MyBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 804634449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_MyBlueprintFunctionLibrary_h_3684979659(TEXT("/Script/Tarans_Tools"),
	Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Megastore_Pack_Bootcamp_Plugins_Tarans_Tools_Source_Tarans_Tools_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
