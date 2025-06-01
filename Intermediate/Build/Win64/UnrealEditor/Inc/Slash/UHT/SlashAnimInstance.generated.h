// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/SlashAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_SlashAnimInstance_generated_h
#error "SlashAnimInstance.generated.h already included, missing '#pragma once' in SlashAnimInstance.h"
#endif
#define SLASH_SlashAnimInstance_generated_h

#define FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlashAnimInstance(); \
	friend struct Z_Construct_UClass_USlashAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USlashAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(USlashAnimInstance)


#define FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlashAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlashAnimInstance(USlashAnimInstance&&); \
	USlashAnimInstance(const USlashAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlashAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlashAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlashAnimInstance) \
	NO_API virtual ~USlashAnimInstance();


#define FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_12_PROLOG
#define FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_API UClass* StaticClass<class USlashAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slash_Source_Slash_Public_Characters_SlashAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
