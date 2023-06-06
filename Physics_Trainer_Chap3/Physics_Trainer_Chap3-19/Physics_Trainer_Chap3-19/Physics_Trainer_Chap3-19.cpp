#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_19(int solution, int answer)
{
	double t = 4 + rand() % (4 + 1);
	double g = 9.8;
	double v0y = 0;
	double H = 0;
	double ��x = 80 + rand() % (3 + 1);
	double v0x = 0;
	double v = 0;

	printf("\n\n");
	printf("3-19\n");
	printf("���� �񽺵��� �������� %6.2lf s �Ŀ� %6.2lf m ���濡 ��������.\n\n", t, ��x); 
	printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n\n");
	printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n");

	if (solution == SHOW)
	{
		H = (g / 2) * t * t;
		printf("\n\n\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n\n");
		printf("���� ������ 0 - H = v0y * t + 1/2 * (-g) * t^2  \n");
		printf("H: �ְ� ����, v0y: y�� �ʱ� �ӵ�, t: �ð�, a: ���ӵ�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g); 
		printf("0 - H =   v0y * t + 1/2 * (-g) * t^2  \n");
		printf("0 - H = %6.2lf * t + 1/2 * (-g) * t^2\n", v0y); 
		printf("H =  1/2 * %6.2lfm/s^2 * (%6.2lfs)^2\n", g, t);
		printf("  = %6.2lfm\n\n", H);  
	} 
	if (answer == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		printf("H = %6.2lfm\n\n", H);
	}
	if (solution == SHOW)
	{
		v0x = ��x / t;
		v = sqrt((v0x) * (v0x));
		printf("============================ Ǯ �� ============================\n\n");
		printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n\n");
		printf("���� ������ v0x = ��x / t, v = ��v0x^2 + v0y^2\n");
		printf("v0x: x�� �ʱ� �ӵ�, v0y: y�� �ʱ� �ӵ�, ��x: ������ �Ÿ�, t: �ð�, v: �ӵ�\n\n");
		printf("v0x = ��x / t\n");
		printf("    = %6.2lfm / %6.2lfs\n", ��x, t);
		printf("    = %6.2lfm/s\n\n", v0x);
		printf("v = ��(v0x^2 + v0y^2)\n");
		printf("  = ��(%6.2lfm/s)^2 + (%6.2lfm/s)^2\n", v0x, v0y);
		printf("  = %6.2lfm/s\n\n", v);
	}
	if (answer == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		printf("v = %6.2lfm/s\n\n", v);
		printf("===============================================================\n\n");
	}
}

int main(void)
{
	Excersize_3_19(1, 1);
}
