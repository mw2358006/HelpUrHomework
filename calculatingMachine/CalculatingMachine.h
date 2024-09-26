// CalculatingMachine.h : ���ǰ� ����ﶧ ���� �ϼ���
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

// ���� ���� ȭ��
void Title()
{
	printf("======\n");
	printf("����\n");
	printf("======\n");
}

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
char InputOper()
{
	char* oper;

	printf("������ �Է� : ");
	scanf("%s",&oper);
	return oper;
}

// ���� ����
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
	else if (operInput == '/') // ������
	{
		printf("%g / %g = %g", num1, num2, num1 / num2);
	}
	else if (operInput == '%') // ������
	{
		printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
	}
	else if (operInput == '^')
	{
		printf("%g ^ %g = %g", num1, num2, pow(num1, num2));
	}
	else
	{
		printf("�ٽ� �õ��� ������\n");
	}
}