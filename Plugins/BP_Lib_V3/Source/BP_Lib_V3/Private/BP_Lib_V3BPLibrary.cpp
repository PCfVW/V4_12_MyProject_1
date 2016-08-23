// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BP_Lib_V3PrivatePCH.h"
#include "BP_Lib_V3BPLibrary.h"

#include <time.h>	// Visibility for time/1

uint32 UBP_Lib_V3BPLibrary::next_lehmer = (uint32)time(NULL);
uint32 UBP_Lib_V3BPLibrary::next_c88    = (uint32)time(NULL);
uint32 UBP_Lib_V3BPLibrary::next_vcpp   = (uint32)time(NULL);
uint64 UBP_Lib_V3BPLibrary::next_mslcg  = (uint64)time(NULL);
uint64 UBP_Lib_V3BPLibrary::next_b1lcg  = (uint64)time(NULL);
uint64 UBP_Lib_V3BPLibrary::next_s1clcg = (uint64)time(NULL);
uint64 UBP_Lib_V3BPLibrary::next_s2clcg = (uint64)time(NULL);

UBP_Lib_V3BPLibrary::UBP_Lib_V3BPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3lehmerrand()
{
	UBP_Lib_V3BPLibrary::next_lehmer = ((UBP_Lib_V3BPLibrary::next_lehmer * 23) % 100000001);
	return (int32)(UBP_Lib_V3BPLibrary::next_lehmer);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3lehmerrandwithseed(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_lehmer = abs(Seed);
	UBP_Lib_V3BPLibrary::next_lehmer = ((UBP_Lib_V3BPLibrary::next_lehmer * 23) % 100000001);
	return (int32)(UBP_Lib_V3BPLibrary::next_lehmer);
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedlehmerrand(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_lehmer = abs(Seed);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3c88rand()
{
	UBP_Lib_V3BPLibrary::next_c88 = UBP_Lib_V3BPLibrary::next_c88 * 1103515245 + 12345;
	return (int32)((UBP_Lib_V3BPLibrary::next_c88 / 65536) % 32768);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3c88randwithseed(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_c88 = abs(Seed);
	UBP_Lib_V3BPLibrary::next_c88 = UBP_Lib_V3BPLibrary::next_c88 * 1103515245 + 12345;
	return (int32)((UBP_Lib_V3BPLibrary::next_c88 / 65536) % 32768);
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedc88rand(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_c88 = abs(Seed);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3vcpprand()
{
	UBP_Lib_V3BPLibrary::next_vcpp = (UBP_Lib_V3BPLibrary::next_vcpp * 214013 + 2531011) % 2147483648;
	return (int32)(UBP_Lib_V3BPLibrary::next_vcpp / 65536);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3vcpprandwithseed(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_vcpp = abs(Seed);
	UBP_Lib_V3BPLibrary::next_vcpp = (UBP_Lib_V3BPLibrary::next_vcpp * 214013 + 2531011) % 2147483648;
	return (int32)(UBP_Lib_V3BPLibrary::next_vcpp / 65536);
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedvcpprand(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_vcpp = abs(Seed);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3mslcgrand()
{
	UBP_Lib_V3BPLibrary::next_mslcg = ((UBP_Lib_V3BPLibrary::next_mslcg * 16807) % 2147483647);
	return (int32)(UBP_Lib_V3BPLibrary::next_mslcg);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3mslcgrandwithseed(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_mslcg = abs(Seed);
	UBP_Lib_V3BPLibrary::next_mslcg = ((UBP_Lib_V3BPLibrary::next_mslcg * 16807) % 2147483647);
	return (int32)(UBP_Lib_V3BPLibrary::next_mslcg);
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedmslcgrand(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_mslcg = abs(Seed);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3b1lcgrand()
{
	UBP_Lib_V3BPLibrary::next_b1lcg = ((UBP_Lib_V3BPLibrary::next_b1lcg * 40692) % 2147483399);
	return (int32)(UBP_Lib_V3BPLibrary::next_b1lcg);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3b1lcgrandwithseed(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_b1lcg = abs(Seed);
	UBP_Lib_V3BPLibrary::next_b1lcg = ((UBP_Lib_V3BPLibrary::next_b1lcg * 40692) % 2147483399);
	return (int32)(UBP_Lib_V3BPLibrary::next_b1lcg);
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedb1lcgrand(int32 Seed)
{
	UBP_Lib_V3BPLibrary::next_b1lcg = abs(Seed);
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3cmlcgrand()
{
	UBP_Lib_V3BPLibrary::next_s1clcg = ((UBP_Lib_V3BPLibrary::next_s1clcg * 40014) % 2147483563);
	UBP_Lib_V3BPLibrary::next_s2clcg = ((UBP_Lib_V3BPLibrary::next_s2clcg * 40692) % 2147483399);
	int64 tmp = UBP_Lib_V3BPLibrary::next_s1clcg - UBP_Lib_V3BPLibrary::next_s2clcg;
	if (0 <= tmp)
		return (int32)(tmp % 2147483562);
	else // tmp < 0
		return (int32)(2147483562 - ((-tmp) % 2147483562));
}

int32 UBP_Lib_V3BPLibrary::BP_Lib_V3cmlcgrandwithseed(int32 Seed1, int32 Seed2)
{
	UBP_Lib_V3BPLibrary::next_s1clcg = abs(Seed1);
	UBP_Lib_V3BPLibrary::next_s2clcg = abs(Seed2);
	UBP_Lib_V3BPLibrary::next_s1clcg = ((UBP_Lib_V3BPLibrary::next_s1clcg * 40014) % 2147483563);
	UBP_Lib_V3BPLibrary::next_s2clcg = ((UBP_Lib_V3BPLibrary::next_s2clcg * 40692) % 2147483399);
	int64 tmp = UBP_Lib_V3BPLibrary::next_s1clcg - UBP_Lib_V3BPLibrary::next_s2clcg;
	if (0 <= tmp)
		return (int32)(tmp % 2147483562);
	else // tmp < 0
		return (int32)(2147483562 - ((-tmp) % 2147483562));
}

void UBP_Lib_V3BPLibrary::BP_Lib_V3seedcmlcgrand(int32 Seed1, int32 Seed2)
{
	UBP_Lib_V3BPLibrary::next_s1clcg = abs(Seed1);
	UBP_Lib_V3BPLibrary::next_s2clcg = abs(Seed2);
}
