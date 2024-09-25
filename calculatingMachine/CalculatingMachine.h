// CalculatingMachine.h : °­ÀÇ°¡ ¾î·Æ³ª¿ä? ÀÌ°É·Î ÇÏ¼¼¿ä
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

// 1¹øÂ° ¼ıÀÚ ÀÔ·Â
double InputNum1()
{
	double num;

	printf("¼ıÀÚ 1 ÀÔ·Â : ");
	scanf("%lf", &num);

	return num;
}

// 2¹øÂ° ¼ıÀÚ ÀÔ·Â
double InputNum2()
{
	double num;
		
	printf("¼ıÀÚ 2 ÀÔ·Â : ");
	scanf("%lf", &num);

	return num;
}

// ¿¬»êÀÚ ÀÔ·Â
int InputOper()
{
	int oper;

	printf("¿¬»êÀÚ : 0(µ¡¼À) 1(»¬¼À) 2(°ö¼À) 3(³ª´°¼À) 4(³ª¸ÓÁö) 5(Á¦°ö)\n");
	printf("¿¬»êÀÚ ÀÔ·Â : ");
	scanf("%d", &oper);

	return oper;
}

// ·Îµ¿·Îµ¿
void CalculatingMachine(double num1, double num2, int operInput)
{
	const char* oper[6] = { "+", "-", "*", "/", "%", "^"};
	switch (operInput)
	{
	case 0: // µ¡¼À
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 + num2);
		break;
	case 1: // »¬¼À 
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 - num2);
		break;
	case 2: // °ö¼À
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 * num2);
		break;
	case 3: // ³ª´°¼À
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, num1 / num2);
		break;
	case 4: // ³ª¸ÓÁö
		printf("%d %s %d = %d", (int)num1, oper[operInput], (int)num2, (int)num1 % (int)num2);
		break;
	case 5: // Á¦°ö
		printf("%.2lf %s %.2lf = %.2lf", num1, oper[operInput], num2, pow(num1, num2));
		break;
	default:
		printf("Àå³­ÇÏ½Ê´Ï±î? ÈŞ¸Õ");
		break;
	};
}