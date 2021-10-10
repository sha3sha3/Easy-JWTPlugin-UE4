// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "jwt.h"
#include "Helper.h"
#include "JWTVerifier.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JWTPluginBPLibrary.generated.h"


UCLASS()
class UJWTPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Claims", Keywords = "JWT"), Category = "JWT")
		static TMap<FString, FString> GetClaims(const FString JWTToken);
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Verifier", Keywords = "JWT"), Category = "JWT")
		static UJWTVerifier* CreateVerifier(FString key, Algorithm algorithm);
		

};
