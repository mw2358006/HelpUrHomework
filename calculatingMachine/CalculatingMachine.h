// CalculatingMachine.h : ���ǰ� ��Ƴ���? �̰ɷ� �ϼ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1��° ���� �Է�
int InputNum1()
{
	int num;

	printf("���� 1 �Է� : ");
	scanf("%d", &num);

	return num;
}

// 2��° ���� �Է�
int InputNum2()
{
	int num;
		
	printf("���� 2 �Է� : ");
	scanf("%d", &num);

	return num;
}

// ������ �Է�
int InputOper()
{
	int oper;

	printf("������ : 0(����) 1(����) 2(����) 3(������) 4(������)\n");
	printf("������ �Է� : ");
	scanf("%d", &oper);

	return oper;
}

// �ε��ε�
void CalculatingMachine(int num1, int num2, int operInput)
{
	char* oper[5] = { "+", "-", "*", "/", "%" };
	;
	switch (operInput)
	{
	case 0: // ����
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 + num2);
		break;
	case 1: // ���� 
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 - num2);
		break;
	case 2: // ����
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 * num2);
		break;
	case 3: // ������
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 / num2);
		break;
	case 4: // ������
		printf("%d %s %d = %d", num1, oper[operInput], num2, num1 % num2);
		break;
	default:
		printf("�峭�Ͻʴϱ�? �޸�");
		break;
	};
}
