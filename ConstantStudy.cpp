// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstantStudy.h"

// Sets default values
AConstantStudy::AConstantStudy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstantStudy::BeginPlay()
{
	Super::BeginPlay();

	/** 
	const는 constant의 약자로 사전적 의미로 "상수"를 의미합니다. 
	말 그대로 const는 그 대상을 변경하지 않는 "상수"를 의미합니다. 
	const 위치에 따라 의미하는 바가 완전히 달라집니다. 
	*/
	/** 
	보통 const 위치가 맨 앞인 첫 번째 형식을 많이 사용합니다. 
	다음과 같이 선언하면 IntValue1과 IntValue2는 변할 수 없는 상수가 됩니다. 
	또한 함수의 반환형이나 매개 변수가 const 변수형일 때도 동일한 의미입니다. 

	일반 변수는 이런데, 포인터 변수일때는 완전히 틀립니다. 
	*/
	const int32 IntValue1 = 1;
	// IntValue1 = 2; // (X)

	int32 const IntValue2 = 1;
	// IntValue2 = 5; // (X)

	/** 
	const 변수는 반드시 선언시 초기화를 해야 하며 초기화를 하지 않으면 컴파일 에러가 발생합니다. 
	그런데 class의 멤버 변수를 const로 선언시에는 반드시 초기화 리스트로 초기화를 해야 합니다. 

	테스트를 위해서 Lion이라는 이름의 클래스와 Tiger라는 이름의 클래스를 정의해 주도록 합니다. 
	*/
	
	/** 
	포인터와 const를 사용할 때는 3가지 경우가 있습니다. 
	1. const위치가 자료형 앞에 있으면서 포인터 변수가 가리키는 값에 대해서 상수화 시키는 경우입니다.
	*/
	int IntValue3 = 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue3 : %d, IntValue3 address : %#x"), IntValue3, &IntValue3);
	/**
	int32포인터 타입의 IntPtr1이라는 이름의 포인터 변수를 선언합니다.
	IntValue3변수의 주소값을 IntPtr1이라는 포인터 변수에 대입함으로써 초기화를 합니다.
	그리고 IntPtr1포인터 변수가 가리키는 값 (*IntPtr1)을 상수화 했습니다.
	*/
	const int32* IntPtr1 = &IntValue3;

	/**
	IntPtr1포인터 변수가 가리키는 값을 상수화했습니다.
	*IntPtr1 = 2;는 IntPtr1이 const 변수이기 때문에 컴파일 에러가 발생하지만
	IntValue3 = 2;는 IntValue3가 비-상수 변수이기 때문에 정상입니다.
	즉 포인터 변수가 아닌 일반 변수입니다.
	*/
	// *IntPtr1 = 2; // 컴파일 에러
	IntValue3 = 2;
	UE_LOG(LogTemp, Warning, TEXT("IntValue3 : %d, IntValue3 address : %#x"), IntValue3, &IntValue3);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 : %d, IntPtr1 address : %#x"), *IntPtr1, IntPtr1);

	/**
	2. const 위치가 자료형과 변수 이름 사이에 있으면서 포인터 변수 자체를 상수화 시키는 경우입니다.
	*/
	int32 IntValue4 = 1;
	int32 IntValue5 = 2;
	/**
	int32 포인터 타입의 intPtr2라는 이름의 포인터 변수를 선언했습니다.
	IntValue4변수의 주소값을 IntPtr2포인터 변수에 대입함으로써 초기화 했습니다.
	그리고 IntPtr2 포인터 변수의 주소값 자체를 상수화 했습니다.
	*/
	int32* const IntPtr2 = &IntValue4;

	//IntPtr2 = &IntValue5; // (X) 컴파일 에러

	/**
	3. 위의 2 경우를 모두 적용해 봅니다.
	*/
	int32 IntValue6 = 1;
	int32 IntValue7 = 2;

	/**
	int32포인터 타입의 IntPtr3라는 이름의 포인터 변수를 선언합니다.
	IntValue6변수의 주소값을 IntPtr3라는 이름의 포인터 변수에 대입함으로써 초기화합니다.
	IntPtr3 포인터 변수가 가리키는 값 (*IntPtr3)을 상수화 합니다.
	IntPtr3 포인터 변수의 주소값 자체를 상수화 합니다.
	*/

	const int32* const IntPtr3 = &IntValue6;

	// *IntPtr3 = 2; // (X) 컴파일 에러
	// IntPtr3 = *IntValue7; // (X) 컴파일 에러

	/**
	C++에서는 참조자가 있기 때문에 포인터를 사용할 일이 별로 없습니다.
	만약 포인터를 상수화 시키려면 int32* const Ptr = &Num; 와 같이 번거롭고
	가독성이 떨어지는 코드가 만들어 집니다. 하지만 참조자는 참조하는 대상을 변경할 수 없는
	특징이 있기 때문에 int32& Ref = Num;의 형태로 사용됩니다.
	*/
	int32 Num = 10;
	/** 두 문장은 같은 문장입니다. 참조자를 사용하면 가독성이 좋습니다. */
	int32* const Ptr = &Num; // 포인터 변수로 포인터 변수가 가리키는 주소값 자체를 상수화합니다. 
	int32& Ref = Num; // Ref라는 참조자로 Num변수의 별칭으로 선언했습니다. 참조자는 한번 대상을 정하면 대상을 변경 못합니다.

	/**
	다양한 방법의 상수 선언방법이 있습니다.
	#define(매크로), const(상수), enum(열거형) 세 가지 상수 선언 방식에 대해서 알아봅니다.
	*/

	/**
	#define(매크로) 상수에 대해서 알아봅니다.
	소스코드를 빌드한다는 것은
	전처리(preprocess) -> 컴파일(compile) -> 어셈블(assemble) -> 링크(link)라는 일련의 과정을 통해
	실행파일(.exe)파일을 만드는 것입니다.
	첫 과정인 전처리는 전처리기가 소스코드를 쭉 읽으면서 전처리 지시자로 처리된 부분을 해석하여
	소스코드를 변형시켜 주는 것을 의미합니다.
	*/

	/**
	전처리 지시자는 #define, #include, #endif, #progma등과 같이 #으로 시작되는 문구를 말하는데
	여기서 #define은 매크로라고 하면 이를 이용해서 상수를 정의할 수 있습니다.

	상수를 정의해 주도록 합니다.
	*/
#define WIDTH 3
#define HEIGHT 4
	/**
	매크로 상수를 정의하여 컴파일을 하면 컴파일 전에 전처리기에 의해 소스코드에서
	WIDTH라고 작성된 모든 부분이 3으로 치환됩니다.
	WIDTH의 모든 부분이 3으로 Ctrl + C, Ctrl + V 된다고 생각하면 됩니다.
	#include 로 선언되면 헤더 파일도 #include 부분에 해당 헤더 파일의 전체 내용이
	Ctrl + C, Ctrl + V 된다고 생각하면 됩니다.
	*/
	int32 IntArr1[WIDTH][HEIGHT]{};

	/**
	클래스를 사용하기 위해서는 헤더를 include해야 합니다.
	언리얼 C++에서는 .h에서는 되도록 이면 다른 헤더를 include하지 않습니다.
	class 지정어를 두어서 전방선언을 하는 이유입니다.

	#include "헤더파일 이름"
	""안의 헤더파일의 내용을 모조리 통째로 보사해서 이 위치에 복사해 라는 의미입니다.
	말 그대로 모두 복사합니다. 프로그램의 크기가 커지고, 필요 없는 기능도 다수 포함하게 됩니다.

	#include "CoreMinimal.h"  게임을 만드는데 필요한 최소한의 헤더가 정의되어 있습니다.

	최적화
	1. 에셋 최적화
	2. 프로그램 최적화

	최소 기능한 선언되어있는 CoreMinimal.h,
	다양한 기능이 선언되어있는 EngineMinimal.h 이다.

	언리얼엔진에서 메모리 관리는
	1. 참조타입의 변수를 선언할 때 UPROPERTY() 엔진이 메모리 관리를 합니다. 가비지 컬렉션
	2. TArray컨테이너에 요소를 추가하면 C++이 메모리 관리를 합니다.
	*/

	/**
	const 상수에 대해서 알아봅니다.
	*/
	const int32 Width = 3;
	const int32 Height = 5;
	int32 IntArr2[Width][Height]{};

	/**
	언리얼엔진에서 코드에 수치값을 넣는 하드코딩을 하지 않는 방법은 2가지가 있습니다.
	1. 엑셀테이블에 값을 정의하고 언리얼엔진에서 DataTable로 읽어와서 처리합니다.
	   만일 값 변경이 필요하다면 엑셀테이블의 값을 변경하면 됩니다. 플레이어에는 이 방법을 적용합니다.
	2. 디테일 패널에 변수의 값이 노출되려면 컴포넌트를 써야 합니다. 값 변경이 필요하다면 디테일 패널의
	   변수값을 수정해주면 됩니다. 몬스터들에는 이 방법을 적용합니다. ActorComponent
	*/
	/**
	열거형(enum, 이뉴머레이션) 상수에 대해서 알아 봅니다.
	enum 상수를 정의해 주도록 합니다.
	*/
	enum EWidthHeight
	{
		Width = 3,
		Height = 4,

	};

	/** 문장을 추가해줍니다. */
	int32 IntArr3[EWidthHeight::Width][EWidthHeight::Width]{};

	/**
	상수는 함수의 매개변수와 함께 사용하는 경우가 너무 많습니다.
	테스트를 위해서 ConstParameter라는 이름의 함수의 원형을 선언해줍니다.

	매개변수 : 파라미터(Parameter), 인수(Argument)
	*/

	/**
	상수에는 2가지 상수가 존재합니다.
	컴파일 시간에 알 수 있는 상수를 컴파일 시간 상수라고 합니다.
	컴파일 시간에 알 수 없는 상수, 즉 실행시간에 알 수 있는 상수를 런타임 상수라고 합니다.

	const, constexpr은 둘 다 상수를 만들어주는 키워드이지만 
	const는 컴파일 시간, 런파임 시간에 모두 만들 수 있고
	constexpr는 컴파일 시간 상수만 만들 수 있습니다.
	*/
	int32 IntValue8 = 10;

	const int32 IntValue9 = 20; // 컴파일 시간 상수
	const int32 IntValue10 = IntValue8; // 런타임 시간 상수

	constexpr int32 IntValue11 = 20; // 컴파일 시간 상수
	//constexpr int32 IntValue12 = IntValue8; // (X) 런타임 시간 상수

	/**
	언리얼에서는 어쩔수없이 블루프린트를 써야하는 부분이 두 부분이 있습니다.
	1. 애니메이션 블루프린트의 AnimGraph 부분입니다. EventGraph부분은 코드로 합니다.
	2. BehaviorTree의 기본 구조는 블루프린트로 합니다.
	   태스크, 서비스, 데코레이터는 코드로 합니다.
	*/
}

// Called every frame
void AConstantStudy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/** 테스트를 위해서 ConstParameter라는 이름의 함수를 정의합니다. */
void AConstantStudy::Constparameter(const int IntValue)
{
	// IntValue = 10; // (X)
}

