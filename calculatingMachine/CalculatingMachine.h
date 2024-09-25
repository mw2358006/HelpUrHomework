// CalculatingMachine.h : ���ǰ� ��Ƴ���? �̰ɷ� �ϼ���
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
	const char* oper[6] = { "+", "-", "*", "/", "%", "^"};
	switch (operInput)
	{
	case 0: // ����
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 + num2);
		break;
	case 1: // ���� 
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 - num2);
		break;
	case 2: // ����
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 * num2);
		break;
	case 3: // ������
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 / num2);
		break;
	case 4: // ������
		printf("%d %s %d = %d", (int)num1, oper[operInput], (int)num2, (int)num1 % (int)num2);
		break;
	case 5: // ����
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, pow(num1, num2));
		break;
	default:
		printf("�峭�Ͻʴϱ�? �޸�");
		break;
	};
}