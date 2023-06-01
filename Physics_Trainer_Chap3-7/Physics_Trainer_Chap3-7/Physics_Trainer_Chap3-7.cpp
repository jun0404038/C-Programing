#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_7(int solution, int answer)
{
	double x = -25;
	double y = 40;
	double S = 0;
	double tan1 = 0; 
	double tan2 = 0;

	printf("\n\n");
	printf("3-7\n");
	printf("��� ������ ������ x������ %6.2f �����̰� y������ %6.2f �����̴�.\n", x, y);
	printf("�� ������ ũ��� ������ ���϶�.\n");

	if (solution == SHOW)
	{
		S = sqrt((x * x) + (y * y));
		printf("\n\n\n"); 
		printf("============================ Ǯ �� ============================\n\n");
		printf("��� ������ ������ x������ %6.2lf �����̰� y������ %6.2lf �����̴�.\n", x, y);
		printf("�� ������ ũ�⸦ ���϶�.\n\n");
		printf("���� ������ S = ��(Ax^2 + Ay^2)\n");
		printf("Ax: ���� A�� x����, Ay: ���� A�� y����, S: ������ ũ��\n\n");
		printf("S = ��(Ax^2 + Ay^2)\n"); 
		printf("  = ��(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S); 
	}
	
	if (answer == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		printf("������ ũ�� = %6.2lf\n", S);
	}

	if (solution == SHOW)
	{
		tan1 = y / x;
		tan2 = tan(y / x); 
		printf("\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("��� ������ ������ x������ %6.2lf �����̰� y������ %6.2lf �����̴�.\n", x, y);
		printf("�� ������ ������ ���϶�.\n\n");
		printf("���� ������ tan�� = Ay / Ax\n");
		printf("Ax: ���� A�� x����, Ay: ���� A�� y����\n\n");
		printf("tan��  = Ay / Ax = %6.2lf / %6.2lf\n", y, x); 
		printf("      = %6.2lf\n", tan2);  
	}

	if (solution == SHOW)
	{
		printf("============================ �� �� ============================\n\n"); 
		printf("������ ���� = %6.2lf\n\n", tan2);  
		printf("===============================================================\n\n");

	}
}
int main(void)
{
	//printf("===============================================================\n");

	Excersize_3_7(SHOW_Solution, Answer); 
}