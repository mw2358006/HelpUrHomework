//CalculatingMachine.c : �������� ����Ʈ
#define _CRT_SECURE_NO_WARNINGS
#include "CalculatingMachine.h"
int main()
{
	int exit = 0;

	Title();

	do
	{
		double num1 = InputNum1();
		char oper = InputOper();
		double num2 = InputNum2();

		CalculatingMachine(num1, num2, oper);
		printf("\n���Ḧ ���ϽŴٸ� 99�� �Է����ֽʽÿ� : ");
		scanf("%d", &exit); // ��� �
		printf("\n");
	} while (exit != 99);
	return 0;
}