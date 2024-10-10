// CalculatingMachine.h : 강의가 어려울때 "참고" 하세요
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
	double num = 0.00;

	printf("숫자 1 입력 : ");
	scanf("%lf", &num);

	return num;
}

// 2번째 숫자 입력
double InputNum2(char oper)
{
	double num;
	if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%' || oper == '^')
	{
		printf("숫자 2 입력 : ");
		scanf("%lf", &num);
		return num;
	}
	else
	{
		num = 0;
		return num;
	}
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
	switch (operInput)
	{
		case'+': // 덧셈
			printf("%g + %g = %g", num1, num2, num1 + num2);
			break;

		case'-':
			printf("%g - %g = %g", num1, num2, num1 - num2);
			break;

		case'*' : // 곱셈
			printf("%g * %g = %g", num1, num2, num1 * num2);
			break;

		case'/' : // 나눗셈
			printf("%g / %g = %g", num1, num2, num1 / num2);
			break;

		case'%' : // 나머지
			printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
			break;

		case'^' : // 제곱
			printf("%g ^ %g = %g", num1, num2, pow(num1, num2));
			break;

		case's' : // sin
			printf("%g sin = %g", num1, sin(num1));
			break;

		case'c' : // cos
			printf("%g cos = %g", num1, cos(num1));
			break;

		case 't' : // tan
			printf("%g tan = %g", num1, tan(num1));
			break;

		defalut:
			printf("다시 시도해 보세요.\n");
			break;
	};
}

// 계산기 본체
void CalculateMachine()
{
	int exit = 0;

	Title();

	do
	{
		double num1 = InputNum1();
		char oper = InputOper();
		double num2 = InputNum2(oper);

		CalculatingMachine(num1, num2, oper);
		printf("\n종료를 원하신다면 99를 입력해주십시요 : ");
		scanf("%d", &exit); // 얘는 운빨
		printf("\n");
	} while (exit != 99);
	return 0;
}