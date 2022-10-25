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
	������ ������� �մϴ�. ������ ������� �� �մϴ�. �����ڶ�� �մϴ�.
	������(Reference)�� C++�ݵ�� ������ �ϴ� �ſ� �߿��� �����Դϴ�.
	������ ���������� �����Ϳ� �����Ͽ� ȥ���� ����� ���� �����̱⵵ �մϴ�.
	C��� ���� �����ڰ� �������ϴ�.
	C++���� �����ڰ� ���ܼ� ������(���� ����, �б� ���� �ڵ�)�� ���� �ڵ带 �ۼ��� �� �ֽ��ϴ�.
	*/
	
	/**
	C++ 11, C++ 14, C++ 17, C++ 20
	C++ 11 : ����Ʈ �����Ϳ� �����ڸ� �����մϴ�.
	*/

	/**
	�������� �������� �� ������ �ֽ��ϴ�.
	1. ��-��� ���� : ���� �����ڶ�� �ϸ� �̰��� �ǹ��մϴ�.
	2. ��� ���� : ����� �����ϱ� ���� �������� ��-��� ������ �����մϴ�.
	*/

	/**
	�����ڶ� ��󿡰� �� �ٸ� �̸��� �ٿ��ִ� ���� �ǹ��մϴ�.
	���� �Ǵ� ��Ī�� �ٿ��شٰ� �� �� �ֽ��ϴ�.
	*/

	/** ������ �߰��� �ݴϴ�. */

	/**
	��Ÿ���� ���� ������ �Ҵ�ǰ�, ���� Ÿ���� �� ������ �Ҵ�˴ϴ�.
	int32 IntValue1 = 1; �� �޸�(����) Ư�� ������ int32��ŭ�� ũ�⸦ �Ҵ��ϰ� 1�̶�� �����͸� �����ϴ� ���Դϴ�.
	�׸��� �Ҵ�� �޸��� �̸��� IntValue1�̶�� �ϰ� �̰��� ������� �մϴ�.
	int32& IntRef1 = IntValue1;�� IntValue1�� �����ϴ� ������ IntRef1�� �����ϴ� ���Դϴ�.
	�׷� �� ������ �̸��� IntValue1 �Ӹ��� �ƴϰ� IntRef1�� �Ǵ� ���Դϴ�.
	��, �ϳ��� �޸� ������ �̸��� 2���� �����, �� ���� �ּҰ��� ���ٶ�� �ǹ��Դϴ�.
	�ϳ��� ����� �ΰ� 2���� �ƴ϶�, �� �̻����ε� �����ڸ� ���� �� �ֽ��ϴ�.
	IntRef1 = 2; �� ���� �ּҸ� ��� ����� �غ��� IntValue1�� IntRef1 ��� 2�� ���� ����ǰ�, �ּҰ� ���� ���� �� �� �ֽ��ϴ�.
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

