//CalculatingMachine.c : �������� ����Ʈ
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
		printf("\n���Ḧ ���ϽŴٸ� 99�� �Է����ֽʽÿ� : ");
		scanf("%d", &exit); // ��� �
		printf("\n");
	} 
	return 0;
}