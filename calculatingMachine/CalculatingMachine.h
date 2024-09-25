// CalculatingMachine.h : 강의가 어렵나요? 이걸로 하세요
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1번째 숫자 입력
int InputNum1()
{
	int num;

	printf("숫자 1 입력 : ");
	scanf("%d", &num);

	return num;
}

// 2번째 숫자 입력
int InputNum2()
{
	int num;
		
	printf("숫자 2 입력 : ");
	scanf("%d", &num);

	return num;
}

// 연산자 입력
int InputOper()
{
	int oper;

	printf("연산자 : 0(덧셈) 1(뺄셈) 2(곱셈) 3(나눗셈) 4(나머지)\n");
	printf("연산자 입력 : ");
	scanf("%d", &oper);

	return oper;
}

// 로동로동
void CalculatingMachine(int num1, int num2, int operInput)
{
	char* oper[5] = { "+", "-", "*", "/", "%" };
	;
	switch (operInput)
	{
	case 0: // 덧셈
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 + num2);
		break;
	case 1: // 뺄셈 
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 - num2);
		break;
	case 2: // 곱셈
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 * num2);
		break;
	case 3: // 나눗셈
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 / num2);
		break;
	case 4: // 나머지
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 % num2);
		break;
	default:
		printf("장난하십니까? 휴먼");
		break;
	};
}
