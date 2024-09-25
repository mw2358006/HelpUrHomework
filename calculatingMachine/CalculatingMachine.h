// CalculatingMachine.h : 강의가 어렵나요? 이걸 보세요. 이해를 못하나요?? 전과하세요
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

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
int InputOper()
{
	int oper;

	printf("연산자 : 0(덧셈) 1(뺄셈) 2(곱셈) 3(나눗셈) 4(나머지) 5(제곱)\n");
	printf("연산자 입력 : ");
	scanf("%d", &oper);
	return oper;
}

// 로동로동
void CalculatingMachine(double num1, double num2, int operInput)
{
	switch (operInput)
	{
		case 0: // 덧셈
			printf("%g + %g = %g", num1, num2, num1 + num2);
			break;
		case 1: // 뺄셈 
			printf("%g - %g = %g", num1, num2, num1 - num2);
			break;
		case 2: // 곱셈
			printf("%g * %g = %g", num1, num2, num1 * num2);
			break;
		case 3: // 나눗셈
			printf("%g / %g = %g", num1, num2, num1 / num2);
			break;
		case 4: // 나머지
			printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
			break;
		case 5: // 제곱
			printf("%g ^ %g = %g", num1,num2, pow(num1, num2));
			break;
	};
}