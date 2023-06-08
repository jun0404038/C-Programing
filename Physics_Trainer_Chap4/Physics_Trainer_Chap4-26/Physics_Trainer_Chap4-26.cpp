#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_4_26(int solution, int answer)
{
	srand(time(NULL));
	double m = 5 + rand() % (3+1);
	double a = 3 + rand() % (2+1);
	double g = 9.8;
	double mg = 0;
	double T = 0;

	printf("\n\n");
	printf("4-26\n");
	printf("������ %6.2lfkg�� ��ü�� �ٿ� �Ŵ޾� ����ø��� �ִ�.  \n", m);
	printf("��ü�� ���ӵ� %6.2lfm/s^2���� �������� �ö󰡰� �ִٸ� \n", a);
	printf("���� ��ü�� �ۿ��ϴ� ���� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		T = m * a + m * g;
		printf("============================ Ǯ �� ============================\n\n");
		printf("�� ��ü�� �ۿ��ϴ� ���� ���Ͽ���\n\n");
		printf("���� ������ ��F = T - m * g = m * a\n");
		printf("F: ��, T: ���, m: ����, g: �߷°��ӵ�, a: ���ӵ�\n\n");
		printf("��F = T - m * g = m * a\n\n");
		printf("T - m * g = m * a\n");
		printf("T = m * (a + g)\n");
		printf("  = %6.2lfkg * (%6.2lfm/s^2 + %6.2lfm/s^2)\n",m,a,g);
		printf("  = %6.2lfN\n\n", T);
	}
	if (answer == SHOW)
	{
		printf("============================ �� �� ============================\n\n");
		printf("��F = %6.2lfN\n\n", T);
		printf("===============================================================\n\n");
	}
}

int main(void)
{
	Excersize_4_26(1, 1);
}