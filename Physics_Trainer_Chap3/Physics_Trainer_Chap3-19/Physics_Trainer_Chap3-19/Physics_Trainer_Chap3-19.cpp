#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_19(int solution, int answer)
{
	double t = 4;
	double v = 80;
	

	printf("\n\n");
	printf("3-19\n");
	printf("���� �񽺵��� �������� %6.2lf s �Ŀ� %6.2lf m ���濡 ��������.\n\n", t, v);
	printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n");
	printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		
		printf("\n\n\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n\n");
		printf("���� ������ ��x = v0x * t, H = v0x * t - (1/2) * g * t^2\n");
		printf("v0x: , t: �ð�, H: �ְ����, g: �߷°��ӵ� \n\n");
		printf("S = ��(Ax^2 + Ay^2)\n");
		//printf("  = ��(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S);
	}

	if (answer == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		///printf("������ ũ�� = %6.2lf\n", S);
	}

	if (solution == SHOW)
	{
		
		printf("\n");
		printf("============================ Ǯ �� ============================\n\n");
		//printf("��� ������ ������ x������ %6.2lf �����̰� y������ %6.2lf �����̴�.\n", x, y);
		printf("�� ������ ������ ���϶�.\n\n");
		printf("���� ������ tan�� = Ay / Ax\n");
		printf("Ax: ���� A�� x����, Ay: ���� A�� y����\n\n");
		//printf("tan��  = Ay / Ax = %6.2lf / %6.2lf\n", y, x);
		//printf("      = %6.2lf\n", tan2);
	}

	if (solution == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		//printf("������ ���� = %6.2lf\n\n", tan2);
		printf("===============================================================\n\n");

	}
}
int main(void)
{
	//printf("===============================================================\n");

	Excersize_3_19(SHOW_Solution, Answer);
}