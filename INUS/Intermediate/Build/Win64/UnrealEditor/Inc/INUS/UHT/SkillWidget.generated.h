// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSkillData;
#ifdef INUS_SkillWidget_generated_h
#error "SkillWidget.generated.h already included, missing '#pragma once' in SkillWidget.h"
#endif
#define INUS_SkillWidget_generated_h

#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetCost); \
	DECLARE_FUNCTION(execOnDisable); \
	DECLARE_FUNCTION(execOnUpdate); \
	DECLARE_FUNCTION(execOnEnable);


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillWidget(); \
	friend struct Z_Construct_UClass_USkillWidget_Statics; \
public: \
	DECLARE_CLASS(USkillWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/INUS"), NO_API) \
	DECLARE_SERIALIZER(USkillWidget)


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkillWidget(USkillWidget&&); \
	USkillWidget(const USkillWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillWidget) \
	NO_API virtual ~USkillWidget();


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_17_PROLOG
#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INUS_API UClass* StaticClass<class USkillWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
