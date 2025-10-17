// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INUS/SkillTreeComponent.h"
#include "INUS/SkillData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTreeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INUS_API UClass* Z_Construct_UClass_USkillTreeComponent();
INUS_API UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister();
INUS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_INUS();
// End Cross Module References

// Begin Class USkillTreeComponent Function AddSkillPoints
struct Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics
{
	struct SkillTreeComponent_eventAddSkillPoints_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventAddSkillPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "AddSkillPoints", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::SkillTreeComponent_eventAddSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::SkillTreeComponent_eventAddSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execAddSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSkillPoints(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function AddSkillPoints

// Begin Class USkillTreeComponent Function CanUnlockSkill
struct Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics
{
	struct SkillTreeComponent_eventCanUnlockSkill_Parms
	{
		FName SkillID;
		FString OutReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventCanUnlockSkill_Parms, SkillID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_OutReason = { "OutReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventCanUnlockSkill_Parms, OutReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventCanUnlockSkill_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventCanUnlockSkill_Parms), &Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_OutReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "CanUnlockSkill", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::SkillTreeComponent_eventCanUnlockSkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::SkillTreeComponent_eventCanUnlockSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execCanUnlockSkill)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SkillID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUnlockSkill(Z_Param_SkillID,Z_Param_Out_OutReason);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function CanUnlockSkill

// Begin Class USkillTreeComponent Function GetAllSkills
struct Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics
{
	struct SkillTreeComponent_eventGetAllSkills_Parms
	{
		TArray<FSkillData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(0, nullptr) }; // 1247298683
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGetAllSkills_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1247298683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "GetAllSkills", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::SkillTreeComponent_eventGetAllSkills_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::SkillTreeComponent_eventGetAllSkills_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_GetAllSkills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_GetAllSkills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execGetAllSkills)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSkillData>*)Z_Param__Result=P_THIS->GetAllSkills();
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function GetAllSkills

// Begin Class USkillTreeComponent Function GetSkill
struct Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics
{
	struct SkillTreeComponent_eventGetSkill_Parms
	{
		FName SkillID;
		FSkillData OutSkill;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSkill;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGetSkill_Parms, SkillID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_OutSkill = { "OutSkill", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGetSkill_Parms, OutSkill), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(0, nullptr) }; // 1247298683
void Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventGetSkill_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventGetSkill_Parms), &Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_OutSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "GetSkill", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::SkillTreeComponent_eventGetSkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::SkillTreeComponent_eventGetSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_GetSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_GetSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execGetSkill)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SkillID);
	P_GET_STRUCT_REF(FSkillData,Z_Param_Out_OutSkill);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSkill(Z_Param_SkillID,Z_Param_Out_OutSkill);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function GetSkill

// Begin Class USkillTreeComponent Function InitializeSkills
struct Z_Construct_UFunction_USkillTreeComponent_InitializeSkills_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_InitializeSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "InitializeSkills", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_InitializeSkills_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_InitializeSkills_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkillTreeComponent_InitializeSkills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_InitializeSkills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execInitializeSkills)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSkills();
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function InitializeSkills

// Begin Class USkillTreeComponent Function UnlockSkill
struct Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics
{
	struct SkillTreeComponent_eventUnlockSkill_Parms
	{
		FName SkillID;
		FString OutReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventUnlockSkill_Parms, SkillID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_OutReason = { "OutReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventUnlockSkill_Parms, OutReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventUnlockSkill_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventUnlockSkill_Parms), &Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_OutReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "UnlockSkill", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::SkillTreeComponent_eventUnlockSkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::SkillTreeComponent_eventUnlockSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_UnlockSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_UnlockSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execUnlockSkill)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SkillID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockSkill(Z_Param_SkillID,Z_Param_Out_OutReason);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function UnlockSkill

// Begin Class USkillTreeComponent
void USkillTreeComponent::StaticRegisterNativesUSkillTreeComponent()
{
	UClass* Class = USkillTreeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSkillPoints", &USkillTreeComponent::execAddSkillPoints },
		{ "CanUnlockSkill", &USkillTreeComponent::execCanUnlockSkill },
		{ "GetAllSkills", &USkillTreeComponent::execGetAllSkills },
		{ "GetSkill", &USkillTreeComponent::execGetSkill },
		{ "InitializeSkills", &USkillTreeComponent::execInitializeSkills },
		{ "UnlockSkill", &USkillTreeComponent::execUnlockSkill },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillTreeComponent);
UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister()
{
	return USkillTreeComponent::StaticClass();
}
struct Z_Construct_UClass_USkillTreeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkillTreeComponent.h" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSkillPoints_MetaData[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Skills_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Skills_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Skills;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSkillPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillTreeComponent_AddSkillPoints, "AddSkillPoints" }, // 950053091
		{ &Z_Construct_UFunction_USkillTreeComponent_CanUnlockSkill, "CanUnlockSkill" }, // 3558169569
		{ &Z_Construct_UFunction_USkillTreeComponent_GetAllSkills, "GetAllSkills" }, // 2178872430
		{ &Z_Construct_UFunction_USkillTreeComponent_GetSkill, "GetSkill" }, // 946991781
		{ &Z_Construct_UFunction_USkillTreeComponent_InitializeSkills, "InitializeSkills" }, // 1410146447
		{ &Z_Construct_UFunction_USkillTreeComponent_UnlockSkill, "UnlockSkill" }, // 2293218186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillTreeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills_ValueProp = { "Skills", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(0, nullptr) }; // 1247298683
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills_Key_KeyProp = { "Skills_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeComponent, Skills), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skills_MetaData), NewProp_Skills_MetaData) }; // 1247298683
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_CurrentSkillPoints = { "CurrentSkillPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeComponent, CurrentSkillPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSkillPoints_MetaData), NewProp_CurrentSkillPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_Skills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_CurrentSkillPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkillTreeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_INUS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillTreeComponent_Statics::ClassParams = {
	&USkillTreeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillTreeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillTreeComponent()
{
	if (!Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton, Z_Construct_UClass_USkillTreeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton;
}
template<> INUS_API UClass* StaticClass<USkillTreeComponent>()
{
	return USkillTreeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillTreeComponent);
USkillTreeComponent::~USkillTreeComponent() {}
// End Class USkillTreeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillTreeComponent, USkillTreeComponent::StaticClass, TEXT("USkillTreeComponent"), &Z_Registration_Info_UClass_USkillTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillTreeComponent), 4225942057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_2219722717(TEXT("/Script/INUS"),
	Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
