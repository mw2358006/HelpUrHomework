//CalculatingMachine.c : 심플이즈 베스트
#define _CRT_SECURE_NO_WARNINGS
#include "CalculatingMachine.h"
int main()
{
	int exit = 0;

	while (exit != 99)
	{
		double num1 = InputNum1();
		double num2 = InputNum2();
		int oper = InputOper();
		CalculatingMachine(num1, num2, oper);
		printf("\n종료를 원하신다면 99를 입력해주십시요 : ");
		scanf("%d", &exit); // 얘는 운빨
		printf("\n");
	} 
	return 0;
}