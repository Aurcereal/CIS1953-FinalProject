// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpookyGame2025/AHingeDoor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAHingeDoor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_AAHingeDoor();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_AAHingeDoor_NoRegister();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpookyGame2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAHingeDoor Function CloseDoor *******************************************
struct Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics
{
	struct AHingeDoor_eventCloseDoor_Parms
	{
		float rotateSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "AHingeDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotateSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHingeDoor_eventCloseDoor_Parms, rotateSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::NewProp_rotateSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAHingeDoor, nullptr, "CloseDoor", Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::AHingeDoor_eventCloseDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::AHingeDoor_eventCloseDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAHingeDoor_CloseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAHingeDoor_CloseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAHingeDoor::execCloseDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_rotateSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDoor(Z_Param_rotateSpeed);
	P_NATIVE_END;
}
// ********** End Class AAHingeDoor Function CloseDoor *********************************************

// ********** Begin Class AAHingeDoor Function LockDoor ********************************************
struct Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics
{
	struct AHingeDoor_eventLockDoor_Parms
	{
		bool lock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "AHingeDoor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_lock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_lock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::NewProp_lock_SetBit(void* Obj)
{
	((AHingeDoor_eventLockDoor_Parms*)Obj)->lock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHingeDoor_eventLockDoor_Parms), &Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::NewProp_lock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAHingeDoor, nullptr, "LockDoor", Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::AHingeDoor_eventLockDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::AHingeDoor_eventLockDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAHingeDoor_LockDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAHingeDoor_LockDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAHingeDoor::execLockDoor)
{
	P_GET_UBOOL(Z_Param_lock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockDoor(Z_Param_lock);
	P_NATIVE_END;
}
// ********** End Class AAHingeDoor Function LockDoor **********************************************

// ********** Begin Class AAHingeDoor Function OpenDoor ********************************************
struct Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics
{
	struct AHingeDoor_eventOpenDoor_Parms
	{
		float rotateSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "AHingeDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotateSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHingeDoor_eventOpenDoor_Parms, rotateSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::NewProp_rotateSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAHingeDoor, nullptr, "OpenDoor", Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::AHingeDoor_eventOpenDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::AHingeDoor_eventOpenDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAHingeDoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAHingeDoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAHingeDoor::execOpenDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_rotateSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor(Z_Param_rotateSpeed);
	P_NATIVE_END;
}
// ********** End Class AAHingeDoor Function OpenDoor **********************************************

// ********** Begin Class AAHingeDoor **************************************************************
void AAHingeDoor::StaticRegisterNativesAAHingeDoor()
{
	UClass* Class = AAHingeDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseDoor", &AAHingeDoor::execCloseDoor },
		{ "LockDoor", &AAHingeDoor::execLockDoor },
		{ "OpenDoor", &AAHingeDoor::execOpenDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAHingeDoor;
UClass* AAHingeDoor::GetPrivateStaticClass()
{
	using TClass = AAHingeDoor;
	if (!Z_Registration_Info_UClass_AAHingeDoor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AHingeDoor"),
			Z_Registration_Info_UClass_AAHingeDoor.InnerSingleton,
			StaticRegisterNativesAAHingeDoor,
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
	return Z_Registration_Info_UClass_AAHingeDoor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAHingeDoor_NoRegister()
{
	return AAHingeDoor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAHingeDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AHingeDoor.h" },
		{ "ModuleRelativePath", "AHingeDoor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAHingeDoor_CloseDoor, "CloseDoor" }, // 2665058498
		{ &Z_Construct_UFunction_AAHingeDoor_LockDoor, "LockDoor" }, // 476458839
		{ &Z_Construct_UFunction_AAHingeDoor_OpenDoor, "OpenDoor" }, // 2216334846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAHingeDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAHingeDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpookyGame2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHingeDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAHingeDoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AAHingeDoor, IInteractable), false },  // 2462738456
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAHingeDoor_Statics::ClassParams = {
	&AAHingeDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAHingeDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAHingeDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAHingeDoor()
{
	if (!Z_Registration_Info_UClass_AAHingeDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAHingeDoor.OuterSingleton, Z_Construct_UClass_AAHingeDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAHingeDoor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAHingeDoor);
AAHingeDoor::~AAHingeDoor() {}
// ********** End Class AAHingeDoor ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_AHingeDoor_h__Script_SpookyGame2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAHingeDoor, AAHingeDoor::StaticClass, TEXT("AAHingeDoor"), &Z_Registration_Info_UClass_AAHingeDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAHingeDoor), 2511891443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_AHingeDoor_h__Script_SpookyGame2025_1081079579(TEXT("/Script/SpookyGame2025"),
	Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_AHingeDoor_h__Script_SpookyGame2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kdngc_OneDrive_Documents_HW_1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_AHingeDoor_h__Script_SpookyGame2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
