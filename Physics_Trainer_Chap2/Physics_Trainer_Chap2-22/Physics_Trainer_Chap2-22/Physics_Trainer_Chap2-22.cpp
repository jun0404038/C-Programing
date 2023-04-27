#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_22(int solution, int answer)
{
	double f = 10;   //�ӵ�
	double t = 2;    //�ð�
	double g = 9.8;  //�߷°��ӵ�
	double V0 = 10;  //�ʱ� �ӵ�
	double V = 29.6; //���� �ӵ�
	double y0 = 0;   //ó�� ����
	double y = 39.6; //����



		 
    printf("2-22 \n");  
	printf("� ���̿��� %.1lf m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", f); 
	printf("(a) ���� ���� �� %.1f s ���� �ӵ��� ���϶�.\n", t);

	if (solution == SHOW)
	{
		printf("\n");
		printf("***************************   Ǯ ��   ***************************\n\n");  
		printf("�� ������ ���õ� ������  V = V0 + a * t�Դϴ�. \n");
		printf("V�� ���߼ӵ�, V0�� ó���ӵ�, a�� ���ӵ�, t�� �ð��Դϴ�.\n");
		printf("�������� ��̹Ƿ� ���ӵ�(a)�� �߷°��ӵ�(g)�� ��ȯ�˴ϴ�.\n");
		printf("���� �Ʒ� �����̹Ƿ� �߷°��ӵ�(g)�� ó���ӵ�(V0)�� �������� ���� �˴ϴ�.\n");
		printf("V0�� ó�� �ӵ��̹Ƿ� -%.1lf m/s �Դϴ�.\n", V0); 
		printf("�߷°��ӵ��� -%.1lf m/s^ 2�Դϴ�.\n", g);
		printf("�ð��� %.0lf s �Դϴ�.\n", t);
		printf("���ð��Ŀ� �߷°��ӵ��� �����ϸ� V = V0 + g * t���� �� ��ȯ�� �˴ϴ�.\n");
		printf("���Ŀ� ���� �����Ͽ� ���߼ӵ����� �����ָ� �˴ϴ�.\n");
		printf("���� V = -%.1lf m + (- %.1lf m/s^2) * %.0lf s�� �˴ϴ�.\n\n", V0, g, t);
		printf("*****************************************************************\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{
		
		printf("***************************   �� ��   ***************************\n\n");
		V = V0 + (g * t);
		printf("Ǯ�̰������� ������ ������\n\n");
	    printf("V = -%.1lf m + (- %.1lf m/s^2) * %.0lf s ���� ����ϸ� \n\n", V0, g, t);
		printf("-%.1lf m + (- %.1lf m/s^2) * %.0lf s = -%.1lf m/s ���� ���ɴϴ�. \n\n", V0, g, t, V);
		printf("*****************************************************************\n");
		printf("\n\n");
	}
	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("***************************   Ǯ ��   ***************************\n\n");
		printf("�� ������ ���õ� ������  y = y0 + V0 * t + 1/2 * a * t^2 �Դϴ�. \n");
		printf("y�� ����, y0�� ó������, V0�� ó���ӵ�, a�� ���ӵ�,  t�� �ð��Դϴ�.\n");
		printf("�������� ��̹Ƿ� ���ӵ�(a)�� �߷°��ӵ�(g)�� ��ȯ�˴ϴ�.\n");
		printf("���� �Ʒ� �����̹Ƿ� �߷°��ӵ�(g)�� ó���ӵ�(V0)�� �������� ���� �˴ϴ�.\n");
		printf("�߷°��ӵ��� -%.1lf m/s^2�Դϴ�.\n", g);
		printf("�ð��� %.0lf s �Դϴ�.\n", t);
		printf("ó�����̴� %.0lf m �Դϴ�.\n", y0);
		printf("V0�� ó�� �ӵ��̹Ƿ� -%.1lf m/s �Դϴ�.\n", V0); 
		printf("���ð��Ŀ� �߷°��ӵ��� �����ϸ� y = y0 + V0 * t + 1/2 * g * t^2���� �� ��ȯ�� �˴ϴ�.\n");
		printf("�߰������� y = y0 + V0 * t + 1/2 * g * t^2 �Ŀ��� y0 ���� %.0lf �̹Ƿ� �Ŀ��� �������ָ�\n", y0);
		printf("y = V0 * t + 1/2 * g * t^2 ���� �˴ϴ�.\n");
		printf("���Ŀ� ���� �����Ͽ� ���̰��� �����ָ� �˴ϴ�.\n");
		printf("������ ���� y = -%.1lf m/s * %.0lf s + 1/2 * (-%.1lf m/s^2) * (%.0lf^2 s) �� �˴ϴ�.\n\n", V0, t, g, t);
		printf("*****************************************************************\n");
		printf("\n\n");
	}

	if (answer == SHOW) 
	{
		 
		printf("***************************   �� ��   ***************************\n\n"); 
		y = V0 * t + (g * t);
		printf("Ǯ�̰������� ������ ������\n\n"); 
		printf("y = -%.1lf m/s * %.0lf s + 1/2 * (-%.1lf m/s^2) * (%.0lf^2 s) ���� ����ϸ�\n\n", V0, t, g, t);
		printf("-%.1lf m/s * %.0lf s + 1/2 * (-%.1lf m/s^2) * (%.0lf^2 s) = -%.1lf m ���� ���ɴϴ�. \n\n", V0, t, g, t, y); 
		printf("*****************************************************************\n"); 
		printf("\n\n"); 
	} 
}

int main(void)
{

	Excersize_2_22(Show_Solution, Answer);

}