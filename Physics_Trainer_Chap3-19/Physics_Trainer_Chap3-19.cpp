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
	double t = 4;
	double x = 80;

	printf("\n\n");
	printf("3-19\n");
	printf("���� �񽺵��� �������� %6.2lf s �Ŀ� %6.2lf m ���濡 ��������.\n\n", t, x);
	printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n");
	printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n");

	if (solution == SHOW)
	{

		printf("\n\n\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n");
		printf("���� ������ ��x = v0x * t, -H = v0y * t + 1/2 * (-g) * t^2  \n");
		printf("v0x: , v0y: , t: �ð�, H: �ְ� ����, g: �߷°��ӵ�\n\n");
		printf("S = ��(Ax^2 + Ay^2)\n");
		printf("  = ��(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S);
	}
}