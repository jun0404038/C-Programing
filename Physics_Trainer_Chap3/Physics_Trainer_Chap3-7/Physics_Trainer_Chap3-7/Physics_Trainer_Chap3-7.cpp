#include<stdio.h>
#define _USE_MATH_DEFINES
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_7(int solution, int answer)
{
	double x = -25 + rand() % (4 + 1); 
	double y = 40 + rand() % (3 + 1);
	double S = 0;
	double tan1 = 0;
	double tan2 = 0;
	double ��_rad = 0;
	double �� = 0;
	double radtodeg = M_PI / 180;

	printf("\n\n");
	printf("3-7\n");
	printf("��� ������ ������ x������ %6.2f �����̰� y������ %6.2f �����̴�.\n", x, y);
	printf("�� ������ ũ��� ������ ���϶�.\n");

	if (solution == SHOW)
	{
		S = sqrt((x * x) + (y * y));
		printf("\n\n\n");
		printf("============================ Ǯ �� ============================\n\n");											
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
		��_rad = atan(tan1); 
		�� = 180 + (��_rad / radtodeg);
		printf("\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("�� ������ ������ ���϶�.\n\n");
		printf("���� ������ tan�� = Ay / Ax\n");
		printf("Ax: ���� A�� x����, Ay: ���� A�� y����, ��: ������ ����\n\n");
		printf("tan��  = Ay / Ax \n");
		printf("      = % 6.2lf / % 6.2lf\n", y, x); 
		printf("      = %6.2lf\n\n", tan1);
		printf("�� = %6.2lf��\n\n", ��);
	}

	if (solution == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		printf("������ ���� = %6.2lf��\n\n", ��);
		printf("===============================================================\n\n");

	}
}
int main(void)
{
	//printf("===============================================================\n");

	Excersize_3_7(SHOW_Solution, Answer);
}