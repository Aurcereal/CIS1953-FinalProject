// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpookyGame2025/Interactable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_UInteractable();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpookyGame2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractable Function InteractWithObject ****************************
struct Interactable_eventInteractWithObject_Parms
{
	AActor* Interactor;
};
void IInteractable::InteractWithObject(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractWithObject instead.");
}
static FName NAME_UInteractable_InteractWithObject = FName(TEXT("InteractWithObject"));
void IInteractable::Execute_InteractWithObject(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventInteractWithObject_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_InteractWithObject);
	if (Func)
	{
		Parms.Interactor=Interactor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		I->InteractWithObject_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UInteractable_InteractWithObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventInteractWithObject_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "InteractWithObject", Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::PropPointers), sizeof(Interactable_eventInteractWithObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Interactable_eventInteractWithObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_InteractWithObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_InteractWithObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execInteractWithObject)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractWithObject_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Interface UInteractable Function InteractWithObject ******************************

// ********** Begin Interface UInteractable ********************************************************
void UInteractable::StaticRegisterNativesUInteractable()
{
	UClass* Class = UInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InteractWithObject", &IInteractable::execInteractWithObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractable;
UClass* UInteractable::GetPrivateStaticClass()
{
	using TClass = UInteractable;
	if (!Z_Registration_Info_UClass_UInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interactable"),
			Z_Registration_Info_UClass_UInteractable.InnerSingleton,
			StaticRegisterNativesUInteractable,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_InteractWithObject, "InteractWithObject" }, // 3104728598
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SpookyGame2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
// ********** End Interface UInteractable **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Interactable_h__Script_SpookyGame2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 2462738456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Interactable_h__Script_SpookyGame2025_569801479(TEXT("/Script/SpookyGame2025"),
	Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Interactable_h__Script_SpookyGame2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Interactable_h__Script_SpookyGame2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
