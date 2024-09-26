// CalculatingMachine.h : 강의가 어려울때 참고 하세요
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

// 계산기 시작 화면
void Title()
{
	printf("======\n");
	printf("계산기\n");
	printf("======\n");
}

// 1번째 숫자 입력
double InputNum1()
{
	double num;

	printf("숫자 1 입력 : ");
	scanf("%lf", &num);

	return num;
}

// 2번째 숫자 입력
double InputNum2()
{
	double num;
		
	printf("숫자 2 입력 : ");
	scanf("%lf", &num);

	return num;
}

// 연산자 입력
char InputOper()
{
	char* oper;

	printf("연산자 입력 : ");
	scanf("%s",&oper);
	return oper;
}

// 계산기 연산
void CalculatingMachine(double num1, double num2, char operInput)
{
	if (operInput == '+')
	{
		printf("%g + %g = %g", num1, num2, num1 + num2);
	}
	else if (operInput == '-')
	{
		printf("%g - %g = %g", num1, num2, num1 - num2);
	}
	else if (operInput == '*')
	{
		printf("%g * %g = %g", num1, num2, num1 * num2);
	}
	else if (operInput == '/') // 나눗셈
	{
		printf("%g / %g = %g", num1, num2, num1 / num2);
	}
	else if (operInput == '%') // 나머지
	{
		printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
	}
	else if (operInput == '^')
	{
		printf("%g ^ %g = %g", num1, num2, pow(num1, num2));
	}
	else
	{
		printf("다시 시도해 보세요\n");
	}
}