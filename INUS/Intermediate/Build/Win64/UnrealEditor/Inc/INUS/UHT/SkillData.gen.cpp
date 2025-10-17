// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INUS/SkillData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillData() {}

// Begin Cross Module References
INUS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_INUS();
// End Cross Module References

// Begin ScriptStruct FSkillData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillData;
class UScriptStruct* FSkillData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillData, (UObject*)Z_Construct_UPackage__Script_INUS(), TEXT("SkillData"));
	}
	return Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton;
}
template<> INUS_API UScriptStruct* StaticStruct<FSkillData>()
{
	return FSkillData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkillData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillID_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prerequisites_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnlocked_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Prerequisites_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Prerequisites;
	static void NewProp_bUnlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlocked;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, SkillID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillID_MetaData), NewProp_SkillID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Prerequisites_Inner = { "Prerequisites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Prerequisites = { "Prerequisites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, Prerequisites), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prerequisites_MetaData), NewProp_Prerequisites_MetaData) };
void Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bUnlocked_SetBit(void* Obj)
{
	((FSkillData*)Obj)->bUnlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bUnlocked = { "bUnlocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkillData), &Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bUnlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnlocked_MetaData), NewProp_bUnlocked_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, Branch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Prerequisites_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Prerequisites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_INUS,
	nullptr,
	&NewStructOps,
	"SkillData",
	Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers),
	sizeof(FSkillData),
	alignof(FSkillData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkillData()
{
	if (!Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton, Z_Construct_UScriptStruct_FSkillData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton;
}
// End ScriptStruct FSkillData

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkillData::StaticStruct, Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps, TEXT("SkillData"), &Z_Registration_Info_UScriptStruct_SkillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillData), 1247298683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillData_h_147413209(TEXT("/Script/INUS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
