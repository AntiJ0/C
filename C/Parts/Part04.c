#include "stdafx.h"
#include "Part04.h"

void Part04()
{
	//If();
	Switch();
}

void If()
{
	/*
	if (조건식)
	{
		조건식이 참일 경우 실행할 명령문1;
		조건식이 참일 경우 실행할 명령문2;
		조건식이 참일 경우 실행할 명령문3;
		조건식이 참일 경우 실행할 명령문4;
	}
	else if (조건식)
	else if의 선행조건 - if 가 앞에 있어야함
	{
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문1;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문2;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문3;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문4;
	}
	else if (조건식)
	{
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문1;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문2;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문3;
		바로 위의 if/else if의 조건식이 거짓이면서, 조건식이 참일 경우 실행할 명령문4;
	}
	else
	{
		위에 있는 모든 if/else if	의 조건식이 거짓일 경우 실행할 명령문1;
		위에 있는 모든 if/else if	의 조건식이 거짓일 경우 실행할 명령문2;
		위에 있는 모든 if/else if	의 조건식이 거짓일 경우 실행할 명령문3;
		위에 있는 모든 if/else if	의 조건식이 거짓일 경우 실행할 명령문4;
	}

	조건문/반복문
	제어문 -> 프로그램의 흐름을 제어
	*/

	//조건문 -> if문/switch문
	float num1 = 0, num2 = 0;

	char oper = '\0';
	printf("수식 입력 (+, -, *, /) : ");
	scanf("%f %c %f", &num1, &oper, &num2);

	if (oper == '+')
	{
		system("cls");
		printf("\n%f + %f = %f\n", num1, num2, num1 + num2);
	}
	else if (oper == '-')
	{
		system("cls");
		printf("\n%f - %f = %f\n", num1, num2, num1 - num2);
	}
	else if (oper == '*')
	{
		system("cls");
		printf("\n%f * %f = %f\n", num1, num2, num1 * num2);
	}
	else if (oper == '/')
	{
		system("cls");
		printf("\n%f / %f = %f\n", num1, num2, num1 / num2);
	}
	else
	{
		system("cls");
		printf("\n잘못된 수식을 입력했습니다.\n");
	}
}

void Switch()
{
	//switch
	/*
	switch (정수)
	{
	case 1:
		정수값이 1일 경우 실행할 명령문1;
		정수값이 1일 경우 실행할 명령문2;
		정수값이 1일 경우 실행할 명령문3;
		정수값이 1일 경우 실행할 명령문4;
		break; -> 명령문 종료
	case 2;
		정수값이 2일 경우 실행할 명령문1;
		정수값이 2일 경우 실행할 명령문2;
		정수값이 2일 경우 실행할 명령문3;
		정수값이 2일 경우 실행할 명령문4;
		break;
	case 3;
		정수값이 3일 경우 실행할 명령문1;
		정수값이 3일 경우 실행할 명령문2;
		정수값이 3일 경우 실행할 명령문3;
		정수값이 3일 경우 실행할 명령문4;
		break;
	default:
		정수값이 위의 어떤 case에도 해당하지 않을 경우 실행할 명령문1;
		정수값이 위의 어떤 case에도 해당하지 않을 경우 실행할 명령문2;
		정수값이 위의 어떤 case에도 해당하지 않을 경우 실행할 명령문3;
		정수값이 위의 어떤 case에도 해당하지 않을 경우 실행할 명령문4;
	}
	*/
	float num1 = 0, num2 = 0;

	char oper = '\0';
	printf("수식 입력 (+, -, *, /) : ");
	scanf("%f %c %f", &num1, &oper, &num2);

	switch (oper)
	{
	case '+':
		system("cls");
		printf("\n%f + %f = %f\n", num1, num2, num1 + num2);
		break;
	case '-':
		system("cls");
		printf("\n%f - %f = %f\n", num1, num2, num1 - num2);
		break;
	case '*':
		system("cls");
		printf("\n%f * %f = %f\n", num1, num2, num1 * num2);
		break;
	case '/':
		system("cls");
		printf("\n%f / %f = %f\n", num1, num2, num1 / num2);
		break;
	default:
		system("cls");
		printf("\n잘못된 수식을 입력했습니다.\n");
		break;
	}
}
