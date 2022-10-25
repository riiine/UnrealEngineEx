// Fill out your copyright notice in the Description page of Project Settings.


#include "ReferenceStudy1.h"

// Sets default values
AReferenceStudy1::AReferenceStudy1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReferenceStudy1::BeginPlay()
{
	Super::BeginPlay();

	/**
	포인터 변수라고 합니다. 참조자 변수라고 안 합니다. 참조자라고 합니다.
	참조자(Reference)는 C++반드시 익혀야 하는 매우 중요한 개념입니다.
	하지만 구조적으로 포인터와 유사하여 혼돈이 생기기 쉬운 개념이기도 합니다.
	C언어 때는 참조자가 없었습니다.
	C++에서 참조자가 생겨서 가독성(보기 좋고, 읽기 쉬운 코드)이 좋은 코드를 작성할 수 있습니다.
	*/
	
	/**
	C++ 11, C++ 14, C++ 17, C++ 20
	C++ 11 : 스마트 포인터와 참조자를 지원합니다.
	*/

	/**
	참조자의 종류에는 두 가지가 있습니다.
	1. 비-상수 참조 : 보통 참조자라고 하면 이것을 의미합니다.
	2. 상수 참조 : 상수를 참조하기 위한 것이지만 비-상수 참조도 가능합니다.
	*/

	/**
	참조자란 대상에게 또 다른 이름을 붙여주는 것을 의미합니다.
	별명 또는 별칭을 붙여준다고 할 수 있습니다.
	*/

	/** 문장을 추가해 줍니다. */

	/**
	값타입은 스택 영역에 할당되고, 참조 타입은 힙 영역에 할당됩니다.
	int32 IntValue1 = 1; 는 메모리(스택) 특정 영역에 int32만큼의 크기를 할당하고 1이라는 데이터를 복사하는 것입니다.
	그리고 할당된 메모리의 이름은 IntValue1이라고 하고 이것을 변수라고 합니다.
	int32& IntRef1 = IntValue1;는 IntValue1을 참조하는 참조자 IntRef1을 선언하는 것입니다.
	그럼 이 변수의 이름은 IntValue1 뿐만이 아니고 IntRef1도 되는 것입니다.
	즉, 하나의 메모리 공간에 이름이 2개가 생기고, 이 둘의 주소값이 같다라는 의미입니다.
	하나의 대상을 두고 2개가 아니라, 그 이상으로도 참조자를 만들 수 있습니다.
	IntRef1 = 2; 는 값과 주소를 모두 출력을 해보면 IntValue1과 IntRef1 모두 2로 값이 변경되고, 주소가 같은 것을 볼 수 있습니다.
	*/
	int32 IntValue1 = 1;
	int32& IntRef1 = IntValue1;

	UE_LOG(LogTemp, Warning, TEXT("IntValue1 : %d, IntValue1 address : %#x"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntRef1 : %d, IntRef1 address : %#x"), IntRef1, &IntRef1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntRef1 = 2;

	UE_LOG(LogTemp, Warning, TEXT("IntValue1 : %d, IntValue1 address : %#x"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntRef1 : %d, IntRef1 address : %#x"), IntRef1, &IntRef1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));
}

// Called every frame
void AReferenceStudy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

