// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillTreeWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkillTreeComponent;
#ifdef INUS_SkillTreeWidget_generated_h
#error "SkillTreeWidget.generated.h already included, missing '#pragma once' in SkillTreeWidget.h"
#endif
#define INUS_SkillTreeWidget_generated_h

#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfirmUnlock); \
	DECLARE_FUNCTION(execOnNodeClicked); \
	DECLARE_FUNCTION(execPopulateTree);


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillTreeWidget(); \
	friend struct Z_Construct_UClass_USkillTreeWidget_Statics; \
public: \
	DECLARE_CLASS(USkillTreeWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/INUS"), NO_API) \
	DECLARE_SERIALIZER(USkillTreeWidget)


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillTreeWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkillTreeWidget(USkillTreeWidget&&); \
	USkillTreeWidget(const USkillTreeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillTreeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillTreeWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillTreeWidget) \
	NO_API virtual ~USkillTreeWidget();


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_10_PROLOG
#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INUS_API UClass* StaticClass<class USkillTreeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
