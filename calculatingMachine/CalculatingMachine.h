// CalculatingMachine.h : ���ǰ� ����ﶧ "����" �ϼ���
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
	double num = 0.00;

	printf("���� 1 �Է� : ");
	scanf("%lf", &num);

	return num;
}

// 2��° ���� �Է�
double InputNum2(char oper)
{
	double num;
	if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%' || oper == '^')
	{
		printf("���� 2 �Է� : ");
		scanf("%lf", &num);
		return num;
	}
	else
	{
		num = 0;
		return num;
	}
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
	switch (operInput)
	{
		case'+': // ����
			printf("%g + %g = %g", num1, num2, num1 + num2);
			break;

		case'-':
			printf("%g - %g = %g", num1, num2, num1 - num2);
			break;

		case'*' : // ����
			printf("%g * %g = %g", num1, num2, num1 * num2);
			break;

		case'/' : // ������
			printf("%g / %g = %g", num1, num2, num1 / num2);
			break;

		case'%' : // ������
			printf("%d % %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
			break;

		case'^' : // ����
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
			printf("�ٽ� �õ��� ������.\n");
			break;
	};
}

// ���� ��ü
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
		printf("\n���Ḧ ���ϽŴٸ� 99�� �Է����ֽʽÿ� : ");
		scanf("%d", &exit); // ��� �
		printf("\n");
	} while (exit != 99);
	return 0;
}