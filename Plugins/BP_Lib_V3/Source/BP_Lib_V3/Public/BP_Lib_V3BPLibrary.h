// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "BP_Lib_V3BPLibrary.generated.h"

UCLASS()
class UBP_Lib_V3BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

private:
	static uint32 next_lehmer;
	static uint32 next_c88;
	static uint32 next_vcpp;
	static uint64 next_mslcg;
	static uint64 next_b1lcg;
	static uint64 next_s1clcg;
	static uint64 next_s2clcg;

public:
	/* Returns a random integer between 1 and 100000000 -- Multiplicative Linear Congruential RNG from Lehmer (1949) with a=23 and m=100000001 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Lehmer's Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3lehmerrand();

	/* Returns a random integer between 1 and 100000000 from a given seed -- Multiplicative Linear Congruential RNG from Lehmer (1949) with a=23 and m=100000001 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Lehmer's Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3lehmerrandwithseed(int32 Seed);

	/* Sets the see for the multiplicative Linear Congruential RNG from Lehmer (1949) with a=23 and m=100000001 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding Lehmer's Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedlehmerrand(int32 Seed);

	/* Returns a random integer between 0 and 32767 -- Linear Congruential RNG from ANSI C88 with a=1103515245, b=12345 and m=2^15=32768 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "c88 Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3c88rand();

	/* Returns a random integer between 0 and 32767 from a given seed -- Linear Congruential RNG from ANSI C88 with a=1103515245, b=12345 and m=2^15=32768 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "c88 Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3c88randwithseed(int32 Seed);

	/* Sets the seed for the linear Congruential RNG from ANSI C88 with a=1103515245, b=12345 and m=2^15=32768 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding c88 Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedc88rand(int32 Seed);

	/* Returns a random integer between 0 and 32767 -- Linear Congruential RNG from Visual C/C++ with a=214013, b=2531011 and m=2^31=2147483648 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VC++ Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3vcpprand();

	/* Returns a random integer between 0 and 32767 from a given seed -- Linear Congruential RNG from Visual C/C++ with a=214013, b=2531011 and m=2^31=2147483648 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VC++ Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3vcpprandwithseed(int32 Seed);

	/* Sets the seed for the linear Congruential RNG from Visual C/C++ with a=214013, b=2531011 and m=2^31=2147483648 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding VC++ Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedvcpprand(int32 Seed);

	/* Returns a random integer between 1 and 2147483646 -- Multiplicative Linear Congruential RNG with a=16807 and m=2^31-1=2147483647 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Minimal Standard Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3mslcgrand();

	/* Returns a random integer between 1 and 2147483646 from a given seed -- Multiplicative Linear Congruential RNG with a=16807 and m=2^31-1=2147483647 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Minimal Standard Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3mslcgrandwithseed(int32 Seed);

	/* Sets the seed for a multiplicative Linear Congruential RNG with a=16807 and m=2^31-1=2147483647 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding the Minimal Standard Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedmslcgrand(int32 Seed);

	/* Returns a random integer between 1 and 2147483398 -- Multiplicative Linear Congruential RNG with a=40692 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Better than Minimal Standard Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3b1lcgrand();

	/* Returns a random integer between 1 and 2147483398 from a given seed -- Multiplicative Linear Congruential RNG with a=40692 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Better than Minimal Standard Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3b1lcgrandwithseed(int32 Seed);

	/* Sets the seed for a multiplicative Linear Congruential RNG with a=40692 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding a better than Standard Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedb1lcgrand(int32 Seed);

	/* Returns a random integer between 1 and 2147483561 -- Combined Multiplicative Linear Congruential RNG with a1=40014, a2=40692, m1=2147483563 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Even Better Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3cmlcgrand();

	/* Returns a random integer between 1 and 2147483561 from a given seed -- Combined Multiplicative Linear Congruential RNG with a1=40014, a2=40692, m1=2147483563 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Even Better Random Integer with seed", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static int32 BP_Lib_V3cmlcgrandwithseed(int32 Seed1, int32 Seed2);

	/* Sets the seed for a combined Multiplicative Linear Congruential RNG with a1=40014, a2=40692, m1=2147483563 and m=2147483399 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Seeding an Even Better Random Integer", Keywords = "BP_Lib_V3 sample test testing"), Category = "BP_Lib_V3Testing")
	static void BP_Lib_V3seedcmlcgrand(int32 Seed1, int32 Seed2);
};
