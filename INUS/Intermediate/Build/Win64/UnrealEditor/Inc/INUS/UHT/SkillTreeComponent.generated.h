// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillTreeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSkillData;
#ifdef INUS_SkillTreeComponent_generated_h
#error "SkillTreeComponent.generated.h already included, missing '#pragma once' in SkillTreeComponent.h"
#endif
#define INUS_SkillTreeComponent_generated_h

#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeSkills); \
	DECLARE_FUNCTION(execAddSkillPoints); \
	DECLARE_FUNCTION(execGetSkill); \
	DECLARE_FUNCTION(execGetAllSkills); \
	DECLARE_FUNCTION(execUnlockSkill); \
	DECLARE_FUNCTION(execCanUnlockSkill);


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillTreeComponent(); \
	friend struct Z_Construct_UClass_USkillTreeComponent_Statics; \
public: \
	DECLARE_CLASS(USkillTreeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INUS"), NO_API) \
	DECLARE_SERIALIZER(USkillTreeComponent)


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkillTreeComponent(USkillTreeComponent&&); \
	USkillTreeComponent(const USkillTreeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillTreeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkillTreeComponent) \
	NO_API virtual ~USkillTreeComponent();


#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_8_PROLOG
#define FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INUS_API UClass* StaticClass<class USkillTreeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
