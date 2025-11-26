// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FactoryGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYSIMV0_FactoryGameMode_generated_h
#error "FactoryGameMode.generated.h already included, missing '#pragma once' in FactoryGameMode.h"
#endif
#define FACTORYSIMV0_FactoryGameMode_generated_h

#define FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFactoryGameMode(); \
	friend struct Z_Construct_UClass_AFactoryGameMode_Statics; \
public: \
	DECLARE_CLASS(AFactoryGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactorySimV0"), NO_API) \
	DECLARE_SERIALIZER(AFactoryGameMode)


#define FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFactoryGameMode(AFactoryGameMode&&); \
	AFactoryGameMode(const AFactoryGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFactoryGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFactoryGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFactoryGameMode) \
	NO_API virtual ~AFactoryGameMode();


#define FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_12_PROLOG
#define FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYSIMV0_API UClass* StaticClass<class AFactoryGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FactorySimV0_Source_FactorySimV0_Public_Player_FactoryGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
