//CalculatingMachine.c : �������� ����Ʈ
#include "CalculatingMachine.h"
int main()
{
	int exit = 0;

	while (exit != 99)
	{
		int num1 = InputNum1();
		int num2 = InputNum2();
		int oper = InputOper();
		CalculatingMachine(num1, num2, oper);
		printf("\n���Ḧ ���ϽŴٸ� 99�� �Է����ֽʽÿ� : ");
		scanf("%d", &exit);
	} 
	return 0;
}