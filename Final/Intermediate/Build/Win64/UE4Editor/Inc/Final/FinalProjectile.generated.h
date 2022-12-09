// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FINAL_FinalProjectile_generated_h
#error "FinalProjectile.generated.h already included, missing '#pragma once' in FinalProjectile.h"
#endif
#define FINAL_FinalProjectile_generated_h

#define Final_Source_Final_FinalProjectile_h_15_SPARSE_DATA
#define Final_Source_Final_FinalProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Final_Source_Final_FinalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Final_Source_Final_FinalProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectile(); \
	friend struct Z_Construct_UClass_AFinalProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Final_Source_Final_FinalProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFinalProjectile(); \
	friend struct Z_Construct_UClass_AFinalProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Final_Source_Final_FinalProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectile(AFinalProjectile&&); \
	NO_API AFinalProjectile(const AFinalProjectile&); \
public:


#define Final_Source_Final_FinalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectile(AFinalProjectile&&); \
	NO_API AFinalProjectile(const AFinalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectile)


#define Final_Source_Final_FinalProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFinalProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFinalProjectile, ProjectileMovement); }


#define Final_Source_Final_FinalProjectile_h_12_PROLOG
#define Final_Source_Final_FinalProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Source_Final_FinalProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Final_Source_Final_FinalProjectile_h_15_SPARSE_DATA \
	Final_Source_Final_FinalProjectile_h_15_RPC_WRAPPERS \
	Final_Source_Final_FinalProjectile_h_15_INCLASS \
	Final_Source_Final_FinalProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Final_Source_Final_FinalProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Source_Final_FinalProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Final_Source_Final_FinalProjectile_h_15_SPARSE_DATA \
	Final_Source_Final_FinalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Final_Source_Final_FinalProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Final_Source_Final_FinalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_API UClass* StaticClass<class AFinalProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Final_Source_Final_FinalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
