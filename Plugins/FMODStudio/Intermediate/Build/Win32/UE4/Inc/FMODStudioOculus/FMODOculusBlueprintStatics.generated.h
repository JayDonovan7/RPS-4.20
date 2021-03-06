// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFMODOculusRoomParameters;
#ifdef FMODSTUDIOOCULUS_FMODOculusBlueprintStatics_generated_h
#error "FMODOculusBlueprintStatics.generated.h already included, missing '#pragma once' in FMODOculusBlueprintStatics.h"
#endif
#define FMODSTUDIOOCULUS_FMODOculusBlueprintStatics_generated_h

#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRoomParameters) \
	{ \
		P_GET_STRUCT_REF(FFMODOculusRoomParameters,Z_Param_Out_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetRoomParameters(Z_Param_Out_Params); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLateReverberationEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetLateReverberationEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetEarlyReflectionsEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRoomParameters) \
	{ \
		P_GET_STRUCT_REF(FFMODOculusRoomParameters,Z_Param_Out_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetRoomParameters(Z_Param_Out_Params); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLateReverberationEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetLateReverberationEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODOculusBlueprintStatics::SetEarlyReflectionsEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODOculusBlueprintStatics(); \
	friend FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics(); \
public: \
	DECLARE_CLASS(UFMODOculusBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FMODStudioOculus"), NO_API) \
	DECLARE_SERIALIZER(UFMODOculusBlueprintStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFMODOculusBlueprintStatics(); \
	friend FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics(); \
public: \
	DECLARE_CLASS(UFMODOculusBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FMODStudioOculus"), NO_API) \
	DECLARE_SERIALIZER(UFMODOculusBlueprintStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODOculusBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODOculusBlueprintStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODOculusBlueprintStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODOculusBlueprintStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODOculusBlueprintStatics(UFMODOculusBlueprintStatics&&); \
	NO_API UFMODOculusBlueprintStatics(const UFMODOculusBlueprintStatics&); \
public:


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODOculusBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODOculusBlueprintStatics(UFMODOculusBlueprintStatics&&); \
	NO_API UFMODOculusBlueprintStatics(const UFMODOculusBlueprintStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODOculusBlueprintStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODOculusBlueprintStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODOculusBlueprintStatics)


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_8_PROLOG
#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_RPC_WRAPPERS \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_INCLASS \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FMODOculusBlueprintStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FMODStudio_Source_FMODStudioOculus_Classes_FMODOculusBlueprintStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
