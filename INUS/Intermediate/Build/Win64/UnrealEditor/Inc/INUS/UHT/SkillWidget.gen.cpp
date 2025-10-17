// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INUS/SkillWidget.h"
#include "INUS/SkillData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillWidget() {}

// Begin Cross Module References
INUS_API UClass* Z_Construct_UClass_USkillWidget();
INUS_API UClass* Z_Construct_UClass_USkillWidget_NoRegister();
INUS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_INUS();
// End Cross Module References

// Begin Class USkillWidget Function GetCost
struct Z_Construct_UFunction_USkillWidget_GetCost_Statics
{
	struct SkillWidget_eventGetCost_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillWidget_GetCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillWidget_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillWidget_GetCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillWidget_GetCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_GetCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillWidget_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillWidget, nullptr, "GetCost", nullptr, nullptr, Z_Construct_UFunction_USkillWidget_GetCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_GetCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillWidget_GetCost_Statics::SkillWidget_eventGetCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_GetCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillWidget_GetCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillWidget_GetCost_Statics::SkillWidget_eventGetCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillWidget_GetCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillWidget_GetCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillWidget::execGetCost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCost();
	P_NATIVE_END;
}
// End Class USkillWidget Function GetCost

// Begin Class USkillWidget Function Init
struct Z_Construct_UFunction_USkillWidget_Init_Statics
{
	struct SkillWidget_eventInit_Parms
	{
		FSkillData _data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillWidget_Init_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillWidget_eventInit_Parms, _data), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(0, nullptr) }; // 1247298683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillWidget_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillWidget_Init_Statics::NewProp__data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillWidget, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_USkillWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillWidget_Init_Statics::SkillWidget_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillWidget_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillWidget_Init_Statics::SkillWidget_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillWidget_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillWidget_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillWidget::execInit)
{
	P_GET_STRUCT(FSkillData,Z_Param__data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param__data);
	P_NATIVE_END;
}
// End Class USkillWidget Function Init

// Begin Class USkillWidget Function OnDisable
struct Z_Construct_UFunction_USkillWidget_OnDisable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillWidget_OnDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillWidget, nullptr, "OnDisable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_OnDisable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillWidget_OnDisable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkillWidget_OnDisable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillWidget_OnDisable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillWidget::execOnDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisable();
	P_NATIVE_END;
}
// End Class USkillWidget Function OnDisable

// Begin Class USkillWidget Function OnEnable
struct Z_Construct_UFunction_USkillWidget_OnEnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillWidget_OnEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillWidget, nullptr, "OnEnable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_OnEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillWidget_OnEnable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkillWidget_OnEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillWidget_OnEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillWidget::execOnEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnable();
	P_NATIVE_END;
}
// End Class USkillWidget Function OnEnable

// Begin Class USkillWidget Function OnUpdate
struct Z_Construct_UFunction_USkillWidget_OnUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillWidget_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillWidget, nullptr, "OnUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillWidget_OnUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillWidget_OnUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkillWidget_OnUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillWidget_OnUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillWidget::execOnUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdate();
	P_NATIVE_END;
}
// End Class USkillWidget Function OnUpdate

// Begin Class USkillWidget
void USkillWidget::StaticRegisterNativesUSkillWidget()
{
	UClass* Class = USkillWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCost", &USkillWidget::execGetCost },
		{ "Init", &USkillWidget::execInit },
		{ "OnDisable", &USkillWidget::execOnDisable },
		{ "OnEnable", &USkillWidget::execOnEnable },
		{ "OnUpdate", &USkillWidget::execOnUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillWidget);
UClass* Z_Construct_UClass_USkillWidget_NoRegister()
{
	return USkillWidget::StaticClass();
}
struct Z_Construct_UClass_USkillWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkillWidget.h" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "Category", "Skill Tree" },
		{ "ModuleRelativePath", "SkillWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_button;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillWidget_GetCost, "GetCost" }, // 3497487228
		{ &Z_Construct_UFunction_USkillWidget_Init, "Init" }, // 2318833352
		{ &Z_Construct_UFunction_USkillWidget_OnDisable, "OnDisable" }, // 2084069876
		{ &Z_Construct_UFunction_USkillWidget_OnEnable, "OnEnable" }, // 2294371151
		{ &Z_Construct_UFunction_USkillWidget_OnUpdate, "OnUpdate" }, // 3166912247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillWidget_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillWidget, button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_button_MetaData), NewProp_button_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillWidget_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillWidget, text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillWidget_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillWidget, icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_icon_MetaData), NewProp_icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillWidget_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillWidget, data), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1247298683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillWidget_Statics::NewProp_button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillWidget_Statics::NewProp_text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillWidget_Statics::NewProp_icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillWidget_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkillWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_INUS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillWidget_Statics::ClassParams = {
	&USkillWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillWidget()
{
	if (!Z_Registration_Info_UClass_USkillWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillWidget.OuterSingleton, Z_Construct_UClass_USkillWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillWidget.OuterSingleton;
}
template<> INUS_API UClass* StaticClass<USkillWidget>()
{
	return USkillWidget::StaticClass();
}
USkillWidget::USkillWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillWidget);
USkillWidget::~USkillWidget() {}
// End Class USkillWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillWidget, USkillWidget::StaticClass, TEXT("USkillWidget"), &Z_Registration_Info_UClass_USkillWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillWidget), 140899586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_1929571364(TEXT("/Script/INUS"),
	Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_INUS_Interfaz_INUS_Source_INUS_SkillWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
