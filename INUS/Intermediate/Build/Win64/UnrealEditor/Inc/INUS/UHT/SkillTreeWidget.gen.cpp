// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INUS/SkillTreeWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTreeWidget() {}

// Begin Cross Module References
INUS_API UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister();
INUS_API UClass* Z_Construct_UClass_USkillTreeWidget();
INUS_API UClass* Z_Construct_UClass_USkillTreeWidget_NoRegister();
INUS_API UClass* Z_Construct_UClass_USkillWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_INUS();
// End Cross Module References

// Begin Class USkillTreeWidget Function ConfirmUnlock
struct Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics
{
	struct SkillTreeWidget_eventConfirmUnlock_Parms
	{
		USkillTreeComponent* SkillTreeComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::NewProp_SkillTreeComp = { "SkillTreeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeWidget_eventConfirmUnlock_Parms, SkillTreeComp), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeComp_MetaData), NewProp_SkillTreeComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::NewProp_SkillTreeComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeWidget, nullptr, "ConfirmUnlock", nullptr, nullptr, Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::SkillTreeWidget_eventConfirmUnlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::SkillTreeWidget_eventConfirmUnlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeWidget::execConfirmUnlock)
{
	P_GET_OBJECT(USkillTreeComponent,Z_Param_SkillTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmUnlock(Z_Param_SkillTreeComp);
	P_NATIVE_END;
}
// End Class USkillTreeWidget Function ConfirmUnlock

// Begin Class USkillTreeWidget Function OnNodeClicked
struct Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics
{
	struct SkillTreeWidget_eventOnNodeClicked_Parms
	{
		FName SkillID;
		USkillTreeComponent* SkillTreeComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeWidget_eventOnNodeClicked_Parms, SkillID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::NewProp_SkillTreeComp = { "SkillTreeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeWidget_eventOnNodeClicked_Parms, SkillTreeComp), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeComp_MetaData), NewProp_SkillTreeComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::NewProp_SkillTreeComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeWidget, nullptr, "OnNodeClicked", nullptr, nullptr, Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::SkillTreeWidget_eventOnNodeClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::SkillTreeWidget_eventOnNodeClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeWidget::execOnNodeClicked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SkillID);
	P_GET_OBJECT(USkillTreeComponent,Z_Param_SkillTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNodeClicked(Z_Param_SkillID,Z_Param_SkillTreeComp);
	P_NATIVE_END;
}
// End Class USkillTreeWidget Function OnNodeClicked

// Begin Class USkillTreeWidget Function PopulateTree
struct Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics
{
	struct SkillTreeWidget_eventPopulateTree_Parms
	{
		USkillTreeComponent* SkillTreeComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::NewProp_SkillTreeComp = { "SkillTreeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeWidget_eventPopulateTree_Parms, SkillTreeComp), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeComp_MetaData), NewProp_SkillTreeComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::NewProp_SkillTreeComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeWidget, nullptr, "PopulateTree", nullptr, nullptr, Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::SkillTreeWidget_eventPopulateTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::SkillTreeWidget_eventPopulateTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeWidget_PopulateTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeWidget_PopulateTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeWidget::execPopulateTree)
{
	P_GET_OBJECT(USkillTreeComponent,Z_Param_SkillTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateTree(Z_Param_SkillTreeComp);
	P_NATIVE_END;
}
// End Class USkillTreeWidget Function PopulateTree

// Begin Class USkillTreeWidget
void USkillTreeWidget::StaticRegisterNativesUSkillTreeWidget()
{
	UClass* Class = USkillTreeWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfirmUnlock", &USkillTreeWidget::execConfirmUnlock },
		{ "OnNodeClicked", &USkillTreeWidget::execOnNodeClicked },
		{ "PopulateTree", &USkillTreeWidget::execPopulateTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillTreeWidget);
UClass* Z_Construct_UClass_USkillTreeWidget_NoRegister()
{
	return USkillTreeWidget::StaticClass();
}
struct Z_Construct_UClass_USkillTreeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeWidget.h" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSkillID_MetaData[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillTreeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillTreeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedSkillID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_health_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_health_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_speed_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_speed_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_damage_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_damage_2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillTreeWidget_ConfirmUnlock, "ConfirmUnlock" }, // 1514319071
		{ &Z_Construct_UFunction_USkillTreeWidget_OnNodeClicked, "OnNodeClicked" }, // 16490190
		{ &Z_Construct_UFunction_USkillTreeWidget_PopulateTree, "PopulateTree" }, // 1186449171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillTreeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_SelectedSkillID = { "SelectedSkillID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, SelectedSkillID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedSkillID_MetaData), NewProp_SelectedSkillID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_health_1 = { "health_1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, health_1), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_1_MetaData), NewProp_health_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_health_2 = { "health_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, health_2), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_2_MetaData), NewProp_health_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_speed_1 = { "speed_1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, speed_1), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_1_MetaData), NewProp_speed_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_speed_2 = { "speed_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, speed_2), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_2_MetaData), NewProp_speed_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_damage_1 = { "damage_1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, damage_1), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_1_MetaData), NewProp_damage_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_damage_2 = { "damage_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeWidget, damage_2), Z_Construct_UClass_USkillWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_2_MetaData), NewProp_damage_2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillTreeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_SelectedSkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_health_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_health_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_speed_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_speed_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_damage_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeWidget_Statics::NewProp_damage_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkillTreeWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_INUS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillTreeWidget_Statics::ClassParams = {
	&USkillTreeWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillTreeWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillTreeWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillTreeWidget()
{
	if (!Z_Registration_Info_UClass_USkillTreeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillTreeWidget.OuterSingleton, Z_Construct_UClass_USkillTreeWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillTreeWidget.OuterSingleton;
}
template<> INUS_API UClass* StaticClass<USkillTreeWidget>()
{
	return USkillTreeWidget::StaticClass();
}
USkillTreeWidget::USkillTreeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillTreeWidget);
USkillTreeWidget::~USkillTreeWidget() {}
// End Class USkillTreeWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillTreeWidget, USkillTreeWidget::StaticClass, TEXT("USkillTreeWidget"), &Z_Registration_Info_UClass_USkillTreeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillTreeWidget), 1874143029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_2220313334(TEXT("/Script/INUS"),
	Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillTreeWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
