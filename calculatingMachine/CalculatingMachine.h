// CalculatingMachine.h : ���ǰ� ��Ƴ���? �̰� ������. ���ظ� ���ϳ���?? �����ϼ���
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

// 1��° ���� �Է�
double InputNum1()
{
	double num;

	printf("���� 1 �Է� : ");
	scanf("%lf", &num);

	return num;
}

// 2��° ���� �Է�
double InputNum2()
{
	double num;
		
	printf("���� 2 �Է� : ");
	scanf("%lf", &num);

	return num;
}

// ������ �Է�
int InputOper()
{
	int oper;

	printf("������ : 0(����) 1(����) 2(����) 3(������) 4(������) 5(����)\n");
	printf("������ �Է� : ");
	scanf("%d", &oper);
	return oper;
}

// �ε��ε�
void CalculatingMachine(double num1, double num2, int operInput)
{
	switch (operInput)
	{
		case 0: // ����
			printf("%g + %g = %g", num1, num2, num1 + num2);
			break;
		case 1: // ���� 
			printf("%g - %g = %g", num1, num2, num1 - num2);
			break;
		case 2: // ����
			printf("%g * %g = %g", num1, num2, num1 * num2);
			break;
		case 3: // ������
			printf("%g / %g = %g", num1, num2, num1 / num2);
			break;
		case 4: // ������
			printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
			break;
		case 5: // ����
			printf("%g ^ %g = %g", num1,num2, pow(num1, num2));
			break;
	};
}