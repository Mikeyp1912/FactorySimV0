// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactorySimV0/Public/Player/FactoryGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FACTORYSIMV0_API UClass* Z_Construct_UClass_AFactoryGameMode();
FACTORYSIMV0_API UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FactorySimV0();
// End Cross Module References

// Begin Class AFactoryGameMode
void AFactoryGameMode::StaticRegisterNativesAFactoryGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFactoryGameMode);
UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister()
{
	return AFactoryGameMode::StaticClass();
}
struct Z_Construct_UClass_AFactoryGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/FactoryGameMode.h" },
		{ "ModuleRelativePath", "Public/Player/FactoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFactoryGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FactorySimV0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFactoryGameMode_Statics::ClassParams = {
	&AFactoryGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFactoryGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFactoryGameMode()
{
	if (!Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton, Z_Construct_UClass_AFactoryGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton;
}
template<> FACTORYSIMV0_API UClass* StaticClass<AFactoryGameMode>()
{
	return AFactoryGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryGameMode);
AFactoryGameMode::~AFactoryGameMode() {}
// End Class AFactoryGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFactoryGameMode, AFactoryGameMode::StaticClass, TEXT("AFactoryGameMode"), &Z_Registration_Info_UClass_AFactoryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryGameMode), 336541244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_300277406(TEXT("/Script/FactorySimV0"),
	Z_CompiledInDeferFile_FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
