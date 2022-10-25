// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstantStudy.generated.h"

/**
const ������ �ݵ�� ����� �ʱ�ȭ�� �ؾ� �ϸ� �ʱ�ȭ�� ���� ������ ������ ������ �߻��մϴ�.
�׷��� class�� ��� ������ const�� ����ÿ��� �ݵ�� �ʱ�ȭ ����Ʈ�� �ʱ�ȭ�� �ؾ� �մϴ�.

�׽�Ʈ�� ���ؼ� Lion�̶�� �̸��� Ŭ������ Tiger��� �̸��� Ŭ������ ������ �ֵ��� �մϴ�.
*/
class Lion
{
private:
	/** 
	������ �����߽��ϴ�. �޸� �Ҵ��� �ƴմϴ�. 
	const ������ ����� ���ÿ� ������ ���� �־ �ʱ�ȭ�� �ؾ� �մϴ�. 
	*/
	const int32 Num;
public:
	/** 
	
	*/
	//Lion() : Num(1)
	//{

	//}
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
	����� �Լ��� �Ű������� �Բ� ����ϴ� ��찡 �ʹ� �����ϴ�.
	�׽�Ʈ�� ���ؼ� ConstParameter��� �̸��� �Լ��� ������ �������ݴϴ�.

	�Ű����� : �Ķ����(Parameter), �μ�(Argument)
	*/
	/**
	�Ű������� ���޵� ������ ���� �Լ� ���ο��� �������� ���մϴ�.
	�Լ��� ȣ���ϴ� ������� IntValue������ ���� �Լ����ο��� �������� ����� �Ѵ� ���Դϴ�.
	*/
	void Constparameter(const int IntValue);


};
