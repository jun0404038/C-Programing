#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_5_13(int solution, int answer)
{
	srand(time(NULL));
    double avg_v = 384000;
    double m = 3;
    double a = 4;
    double b = 24;
    double c = 22;
    double em = 5.98;
    double mm = 7.36;
    double G = 6.67 * pow(10,-11);
    printf("\n");
    printf("5-13 \n");
    printf("������ �� ������ ��� �Ÿ��� %6.2lfkm�̴�.\n",avg_v);
    printf("������ �� ���� �߰� ������ ��ġ�� ���� %6.2lf * 10^%6.2lfkg�� \n", m, a);
    printf("���ּ��� ������ �޿� ���� �޴� ��¥ �߷��� ���ΰ�? \n");
    printf("������ ������ %6.2lf * 10^6.2lfkg�̰�, ���� ������ %6.2lf * 10^%6.2lfkg�̴�.\n\n", em, b, mm, c);
    printf("(a) ���ּ��� ������ �޿� ���� �޴� ��¥ �߷��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ּ��� ������ �޿� ���� �޴� ��¥ �߷��� ���ΰ�?\n\n");
        printf("���� ������ Fg = G * (m / r^2) * (M1 - M2)");
        printf("Fg: ��¥ �߷�, G: �����η� ���, m: ����, M1: ������ ����, M2: ���� ����\n\n ");
        printf("Fg = G * (m / r^2) * (M1 - M2)\n");
        printf("   = %6.2lf * (%6.2lf / %6.2lf) * (%6.2lf - %6.2lf)\n",G, m, );
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        
    }
}
int main(void)
{
    Excersize_5_13(1, 1);
}