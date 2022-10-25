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

/**
������(enum, �̴��ӷ��̼�) ����� ���ؼ� �˾� ���ϴ�.
enum ����� ������ �ֵ��� �մϴ�.
*/
enum EWidthHeight
{
	Width = 3,
	Height = 4,

};

/**
�Լ����� constŰ���带 ���̸� ��� �ɱ��?
�׽�Ʈ�� ���ؼ� Animal�̶�� �̸��� Ŭ������ ������ �ݴϴ�.

constŰ���尡 �ٴ� ��ġ
1. �ڷ��� �տ� �ٽ��ϴ�.
2. �ڷ����� ���� �̸� ���̿� �ٽ��ϴ�.
3. ��ȯ���� �ִ� �Լ��� ���� �ٽ��ϴ�.
4. �Լ��� ���� �ٽ��ϴ�.
*/
class Animal
{
private:
	/** �÷°��� �����ϴ� ��� ������ �����մϴ�. */
	int32 EyeSight = 100;

public:
	/** �÷°��� ��ȯ�ϴ� GetEyeSight��� �̸��� �Լ��� ������ �����մϴ�. */
	int32 GetEyeSight(const int EyeValue) const;
	/** SetInfo��� �̸��� �Լ��� �����մϴ�. */
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
	����� �Լ��� �Ű������� �Բ� ����ϴ� ��찡 �ʹ� �����ϴ�.
	�׽�Ʈ�� ���ؼ� ConstParameter��� �̸��� �Լ��� ������ ������ �ݴϴ�.

	�Ű����� : �Ķ����(Parameter), �μ�(Argument)
	*/
	/** 
	�Ű������� ���޵� ������ ���� �Լ� ���ο��� �������� ���մϴ�. 
	�Լ��� ȣ���ϴ� ������� IntValue������ ���� �Լ����ο��� �������� ����� �ϴ� ���Դϴ�. 
	*/
	void Constparameter(const int IntValue);

};
