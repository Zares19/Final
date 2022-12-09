// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINAL_FinalCharacter_generated_h
#error "FinalCharacter.generated.h already included, missing '#pragma once' in FinalCharacter.h"
#endif
#define FINAL_FinalCharacter_generated_h

#define Final_Source_Final_FinalCharacter_h_20_SPARSE_DATA
#define Final_Source_Final_FinalCharacter_h_20_RPC_WRAPPERS
#define Final_Source_Final_FinalCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Final_Source_Final_FinalCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalCharacter(); \
	friend struct Z_Construct_UClass_AFinalCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final"), NO_API) \
	DECLARE_SERIALIZER(AFinalCharacter)


#define Final_Source_Final_FinalCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFinalCharacter(); \
	friend struct Z_Construct_UClass_AFinalCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final"), NO_API) \
	DECLARE_SERIALIZER(AFinalCharacter)


#define Final_Source_Final_FinalCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalCharacter(AFinalCharacter&&); \
	NO_API AFinalCharacter(const AFinalCharacter&); \
public:


#define Final_Source_Final_FinalCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalCharacter(AFinalCharacter&&); \
	NO_API AFinalCharacter(const AFinalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalCharacter)


#define Final_Source_Final_FinalCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFinalCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFinalCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFinalCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFinalCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFinalCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFinalCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFinalCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFinalCharacter, L_MotionController); }


#define Final_Source_Final_FinalCharacter_h_17_PROLOG
#define Final_Source_Final_FinalCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Source_Final_FinalCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Final_Source_Final_FinalCharacter_h_20_SPARSE_DATA \
	Final_Source_Final_FinalCharacter_h_20_RPC_WRAPPERS \
	Final_Source_Final_FinalCharacter_h_20_INCLASS \
	Final_Source_Final_FinalCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Final_Source_Final_FinalCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Source_Final_FinalCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Final_Source_Final_FinalCharacter_h_20_SPARSE_DATA \
	Final_Source_Final_FinalCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Final_Source_Final_FinalCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Final_Source_Final_FinalCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_API UClass* StaticClass<class AFinalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Final_Source_Final_FinalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
