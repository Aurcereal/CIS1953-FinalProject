// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpookyGame2025/Dummy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDummy() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_ADummy();
SPOOKYGAME2025_API UClass* Z_Construct_UClass_ADummy_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpookyGame2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADummy *******************************************************************
void ADummy::StaticRegisterNativesADummy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADummy;
UClass* ADummy::GetPrivateStaticClass()
{
	using TClass = ADummy;
	if (!Z_Registration_Info_UClass_ADummy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Dummy"),
			Z_Registration_Info_UClass_ADummy.InnerSingleton,
			StaticRegisterNativesADummy,
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
	return Z_Registration_Info_UClass_ADummy.InnerSingleton;
}
UClass* Z_Construct_UClass_ADummy_NoRegister()
{
	return ADummy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADummy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy.h" },
		{ "ModuleRelativePath", "Dummy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADummy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpookyGame2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADummy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADummy_Statics::ClassParams = {
	&ADummy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADummy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADummy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADummy()
{
	if (!Z_Registration_Info_UClass_ADummy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADummy.OuterSingleton, Z_Construct_UClass_ADummy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADummy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADummy);
ADummy::~ADummy() {}
// ********** End Class ADummy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_explo_OneDrive_Documents_GitHub_CIS1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Dummy_h__Script_SpookyGame2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADummy, ADummy::StaticClass, TEXT("ADummy"), &Z_Registration_Info_UClass_ADummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADummy), 1952755550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_explo_OneDrive_Documents_GitHub_CIS1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Dummy_h__Script_SpookyGame2025_2913008656(TEXT("/Script/SpookyGame2025"),
	Z_CompiledInDeferFile_FID_Users_explo_OneDrive_Documents_GitHub_CIS1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Dummy_h__Script_SpookyGame2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_explo_OneDrive_Documents_GitHub_CIS1953_CIS1953_FinalProject_SpookyGame2025_Source_SpookyGame2025_Dummy_h__Script_SpookyGame2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
