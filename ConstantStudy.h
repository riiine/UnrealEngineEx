// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstantStudy.generated.h"

/**
const 변수는 반드시 선언시 초기화를 해야 하며 초기화를 하지 않으면 컴파일 에러가 발생합니다.
그런데 class의 멤버 변수를 const로 선언시에는 반드시 초기화 리스트로 초기화를 해야 합니다.

테스트를 위해서 Lion이라는 이름의 클래스와 Tiger라는 이름의 클래스를 정의해 주도록 합니다.
*/
class Lion
{
private:
	/** 
	변수만 선언했습니다. 메모리 할당이 아닙니다. 
	const 변수는 선언과 동시에 변수에 값을 주어서 초기화를 해야 합니다. 
	*/
	const int32 Num;
public:
	/** 
	
	*/
	//Lion() : Num(1)
	//{

	//}
};

/**
열거형(enum, 이뉴머레이션) 상수에 대해서 알아 봅니다.
enum 상수를 정의해 주도록 합니다.
*/
enum EWidthHeight
{
	Width = 3,
	Height = 4,

};

/**
함수끝에 const키워드를 붙이면 어떻게 될까요?
테스트를 위해서 Animal이라는 이름의 클래스를 정의해 줍니다.

const키워드가 붙는 위치
1. 자료형 앞에 붙습니다.
2. 자료형과 변수 이름 사이에 붙습니다.
3. 반환형이 있는 함수의 끝에 붙습니다.
4. 함수의 끝에 붙습니다.
*/
class Animal
{
private:
	/** 시력값을 저장하는 멤버 변수를 선언합니다. */
	int32 EyeSight = 100;

public:
	/** 시력값을 반환하는 GetEyeSight라는 이름의 함수의 원형을 선언합니다. */
	int32 GetEyeSight(const int EyeValue) const;
	/** SetInfo라는 이름의 함수를 정의합니다. */
	void SetInfo() {}
};

UCLASS()
class ACTIONRPG_API AConstantStudy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstantStudy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	상수는 함수의 매개변수와 함께 사용하는 경우가 너무 많습니다.
	테스트를 위해서 ConstParameter라는 이름의 함수의 원형을 선언해 줍니다.

	매개변수 : 파라미터(Parameter), 인수(Argument)
	*/
	/** 
	매개변수로 전달된 변수의 값을 함수 내부에서 수정하지 못합니다. 
	함수를 호출하는 사람에게 IntValue변수의 값을 함수내부에서 변경하지 말라고 하는 것입니다. 
	*/
	void Constparameter(const int IntValue);

};
