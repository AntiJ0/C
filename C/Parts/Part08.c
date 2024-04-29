#include "stdafx.h"
#include "Part08.h"

void Part08()
{
	//Function();
	//StaticGlobal();
	RecursiveFunction();
}

void Function()
{
	//입력값에 따라 출력값이 결정되는 과정
	//void -> 공허(비어있음)
	//함수의 핵심 -> 코드의 그룹화와 재사용

	/*
	함수의 선언
	함수의 기본형태
	반환형 함수이름(매개변수)

	함수의 정의
	반환형 함수이름(매개변수) {함수몸체}
	함수가 실행될 때 함수몸체에 있는 내용 실행

	함수의 호출
	함수이름(매개변수);

	반환형이 존재 -> 함수의 출력값이 존재
	반환형 -> 함수에서 반환될 값의 자료형
	매개변수 -> 함수의 입력값

	int func1(int a, int b); -> 입력 o, 출력 o
	void func2(int a, int b); -> 입력 o, 출력 x
	int func3(void); -> 입력x, 출력 o
	void fund4(void); -> 입력 x, 출력 x

	int a;
	a = 10;
	a = 9;
	*/

	int num1 = 0, num2 = 0;

	char oper = '\0';
	printf("수식 입력 (+, -, *, /) : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	system("cls");

	switch (oper)
	{
	case '+':
	{
		int result = GetSumValue(num1, num2);
		printf("%d + %d = %d\n", num1, num2, result);
		break;
	}
	case '-':
	{
		printf("%d - %d = %d\n", num1, num2, GetSubValue(num1, num2));
		break;
	}
	case '*':
	{
		int result = GetMulValue(num1, num2);
		printf("%d * %d = %d\n", num1, num2, result);
		break;
	}
	case '/':
	{
		float result = GetDivValue(num1, num2);
		printf("%d + %f = %f\n", num1, (float)num2, result);
		break;
	}
	default:
		printf("잘못된 수식을 입력했습니다.\n");
		break;
	}
}

int GetSumValue(int val1, int val2)
{
	return val1 + val2;
}

int GetSubValue(int val1, int val2)
{
	return val1 - val2;
}

int GetMulValue(int val1, int val2)
{
	return val1 * val2;
}

float GetDivValue(int val1, int val2)
{
	return val1 / (float)val2;
}

void StaticGlobal()
{
	int value = 0;
	//함수 안에서 선언된 함수 -> 지역함수

	do
	{
		printf("정수 입력 : ");
		scanf("%d", &value);

		IncreaseValue(value);
		printf("\n");
	} while (value != 0);
}

extern int globalVal;

//정적 전역변수 -> 해당 소스파일에서만 사용할 수 있는 전역변수
static int staticGlobalVal = 30;

void IncreaseValue(int val)
{
	//Stack
	//Heap
	//Data
	//Code

	int num = 0;
	static int staticNum = 0;
	//정적 지역변수 -> 지역변수긴 하지만 한번 정해진 값은 계속 유지됨

	num += val;
	//num = num + val
	staticNum += val;
	globalVal += val;
	staticGlobalVal += val;

	system("cls");

	printf("===== 누적 결과 =====\n");
	printf("일반 지역 변수 : %d\n", num);
	printf("정적 지역 변수 : %d\n", staticNum);
	printf("일반 전역 변수 : %d\n", globalVal);
	printf("정적 전역 변수 : %d\n", staticGlobalVal);

	
}

void RecursiveFunction()
{
	int value = 0;

	printf("1부터 더해질 정수 입력 : ");
	scanf("%d", &value);

	printf("\n1부터 %d까지의 정수를 전부 더한 값 : %d\n\n", value, GetArithmeticSeriesTail(value, 0));

	//쓸데없이 함수를 계속 호출함
	//효율 x, 편리 o
	//스택 오버플로우
	//시간 복잡도(함수 오버헤드) 상승
}

int GetArithmeticSeries(int val)
{
	//재귀함수
	//반복문과는 다르게 반복될때마다 함수가 호출됨
	//스택 오버플로우 발생 가능성 상승
	if (val == 1)
		return val;

	return val + GetArithmeticSeries(val - 1);
}

int GetArithmeticSeriesTail(int val, int sum)
{
	//꼬리 재귀
	if (val == 0)
		return sum;

	return GetArithmeticSeriesTail(val - 1, val + sum);
}
