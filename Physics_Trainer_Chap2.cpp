#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_22(int solution, int answer)
{
	double fast = 10;
	double t = 2;
	double g = 9.8;
	double V0 = 10;




	printf("2-22 \n");
	printf("� ���̿��� %.1lf m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n\n", fast);
	printf("(a) ���� ���� �� %.1f s ���� �ӵ��� ���϶�.\n\n", t);

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("���� ������  V = V0 + a * t�Դϴ�. \n");
		printf("V�� ���߼ӵ�, V0�� ó���ӵ�, a�� ���ӵ�, t�� �ð��Դϴ�.\n");
		printf("�������� ��̹Ƿ� ���ӵ�(a)�� �߷°��ӵ�(g)�� ��ȯ�˴ϴ�.\n");
		printf("���� �Ʒ� �����̹Ƿ� �߷°��ӵ�(g)�� ó���ӵ�(V0)�� �������� ���� �˴ϴ�.\n");
		printf("�߷°��ӵ��� -%1lf m/s^ 2�Դϴ�.\n", g);
		printf("�ð��� %1lf s �Դϴ�.\n", t);
		printf("���ð��Ŀ� �߷°��ӵ��� �����Ͽ� V = V0 + g * t���� �� ��ȯ�� �˴ϴ�.\n");
		printf("V0�� ó�� �ӵ��̹Ƿ� -%1lf m/s�̴�.\n", V0);
		printf("���Ŀ� ���� �����Ͽ� ���߼ӵ����� �����ָ� �ȴ�.\n");
		printf("���� V = -%1lf m + (- %1lf m/s^2) * %1lf s�� �˴ϴ�.\n", V0, g, t);
		printf("=================================================================\n");
		printf("\n\n");
	}
	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n\n");
}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_22(Show_Solution, Answer);



}