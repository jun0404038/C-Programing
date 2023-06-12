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

void Excersize_3_9(int solution, int answer)
{
    srand(time(NULL));
    double v = 41.0;
    double angle = 120.0;
    double angle2 = 90;
    double �� = 180 - angle;
    double Changed_Speed = 25.0;
    double First_hour = 3.0;
    double Later_hour = 4.5;
    double r = (v * First_hour);
    double theta = 360.0 - angle;
    double x1 = r * cos(DEG2RAD(��));
    double y1 = r * sin(DEG2RAD(��));
    double x2 = 0.0;
    double y2 = Changed_Speed * (Later_hour - First_hour);
    double y2_2 = y2 * sin(DEG2RAD(angle2));
    double x = x1 + x2;
    double y = y1 + y2;
    double d = sqrt(pow(x, 2) + pow(y, 2));
    double qkdgid = 60;
    double north_angle_x = 0;
    double north_angle_y = 90;
    double r1 = 0;
    double r2 = 0;
    double r3 = 0;
    double qwer = (x1 / d);
    double result_acos = RAD2DEG(acos(qwer));
    double ra = 0;

    printf("\n");
    printf("3-9 \n");
    printf("���ֵ��� ��ǳ�� �������� �ִ�.\n");
    printf("�ӵ��� %5.2lf km/h �� ��ǳ�� ���� ������ %5.2lf�� �������� ����� ��������.\n", v, angle);
    printf("%5.2lf h �� �� ��ǳ�� ������ �������� %5.2lf km/h �� ���� �ӵ��� �ٲ����. \n", First_hour, Changed_Speed);
    printf("���ֵ��� ���� ��ǳ�� %5.2lf h �Ŀ��� ���ֵ����� �󸶳� �ָ� ������?\n\n", Later_hour);
    printf("(a) ��ǳ�� ����(x��), ����(y��) �������� �̵��� �Ÿ��� ���� ���ΰ�?\n\n");
    printf("(b) ��ǳ�� �̵��� �� �Ÿ��� ���ΰ�?\n\n");
    printf("(c) ��ǳ�� �̵��� ��(��)�� ���ΰ�?\n\n");
    printf("(d) ��ǳ�� ����ǥ�� ���Ͽ���\n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ��ǳ�� ����(x��), ����(y��) �������� �̵��� �Ÿ��� ���� ���ΰ�?\n\n");
        printf("���� ������ ��x = v * t\n");
        printf("��x: �Ÿ�, v: �ӵ�, t: �ð�, r:�������� ���� �̵��� �Ÿ�\n");
        printf("cos: �ﰢ�Լ������� x����, sin: �ﰢ�Լ������� y���� \n");
        printf("x1: ��ǳ�� ���� �̵� �Ÿ�, y1: ��ǳ�� ���� �̵� �Ÿ�\n\n");
        printf("������ ���� %5.2lf�ƴ� x��(����) ���� �������� 180�� - %5.2lf�� = %5.2lf���Դϴ�.\n\n", qkdgid, qkdgid, angle);
        printf("��ǳ�� ���ֵ��� ����� ���� r =  %5.2lf km/h * %5.2lf h = %5.2lf km\n", v, First_hour, v * First_hour);
        printf("��ǳ�� �ϼ������� �ѹ�, �������� �ѹ� �̵��ϱ� ������ �� �ι��� �̵��Ÿ��� ���� ���� �� �Ÿ��Դϴ�. \n\n");
        printf("x1 = r * cos��\n");
        printf("   = %5.2lf km * cos (%5.2lf��) \n", v * First_hour, ��);
        printf("   = %5.2lfkm\n\n", x1);
        printf("y1 = r * sin��\n");
        printf("   = %5.2lf km * sin (%5.2lf��) \n", v * First_hour, ��);
        printf("   =  %5.2lfkm\n\n", y1);
        printf("��ǳ�� ������ �ٲ� �� ����: %5.2lf km/h * %5.2lf h = %5.2lf km\n", Changed_Speed, Later_hour - First_hour, Changed_Speed * (Later_hour - First_hour));
        printf("��ǳ�� ����(y��)���θ� �̵��߱� ������ x������ 0�Դϴ�.\n\n");
        printf("x2 = 0\n\n");
        printf("y2 = %5.2lf km * sin (%5.2lf��)\n", y2, angle2);
        printf("   =  %5.2lfkm\n\n", y2_2);
        printf("����(x��)������ �� �̵��Ÿ�: x1 + x2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n", x1, x2, x1 + x2);
        printf("����(y��)������ �� �̵��Ÿ�: y1 + y2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n\n", y1, y2_2, y1 + y2_2);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("����(x��)������ �� �̵��Ÿ�: x1 + x2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n", x1, x2, x1 + x2);
        printf("����(y��)������ �� �̵��Ÿ�: y1 + y2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n\n", y1, y2_2, y1 + y2_2);
    }
    if (solution = SHOW)
    {
        ra = sqrt(pow(x1 + x2, 2) + pow(y1 + y2_2, 2));
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ��ǳ�� �̵��� �� �Ÿ��� ���ΰ�?\n\n");
        printf("���� ������ r = ��(x^2 + y^2)\n");
        printf("r: ��ǳ�� �̵��� �� �Ÿ�, x: ����(x��)������ �� �̵��Ÿ�, y: ����(y��)������ �� �̵��Ÿ�\n\n");
        printf("x = x1 + x2\n");
        printf("  = %5.2lfkm\n\n", x1+x2);
        printf("y = y1 + y2\n");
        printf("  = %5.2lfkm\n\n",y1+y2_2);
        printf("r = ��(x^2 + y^2)\n");
        printf("  = ��((%5.2lfkm)^2 + (%5.2lfkm)^2)\n", x1 + x2, y1 + y2_2);
        printf("  = %5.2lfkm\n\n", ra);
    }
    if (answer = SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("r = %5.2lfkm\n\n", ra);
    }
    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) ��ǳ�� �̵��� ��(��)�� ���ΰ�?\n\n");
        printf("���� ������ �� = r * cos��\n");
        printf("��: ��ǳ�� �̵��� ��, r: ����(x��)������ �� �̵��Ÿ�\n\n");
        printf("�� = r * cos��\n");
        printf("r * cos�� = %5.2lfkm\n", x1);
        printf("    cos�� = %5.2lfkm / r\n", x1);
        printf("    cos�� = %5.2lfkm / %5.2lfkm\n", x1, d);
        printf("    cos�� = %5.2lf\n\n", x1 / d);
        printf("acos(%5.2lf) = %5.2lf��\n", x1 / d, result_acos);
        printf("�� = %5.2lf��\n\n", result_acos);
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("�� = %5.2lf��\n", result_acos);
    }
    if (solution == SHOW)
    {
        r3 = sqrt(pow(x, 2) + pow(y, 2));
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(d) ��ǳ�� ����ǥ�� ���Ͽ���\n\n");
        printf("r: ��ǳ�� �̵��� �� �Ÿ�, ��: ��ǳ�� �̵��� ��\n\n");
        printf("����ǥ = (r,��)\n\n");
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("(%5.2lf km , %5.2lf��)\n\n", d, result_acos);
        printf("=================================================================\n");
    }
}
int main(void)
{
    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");
    Excersize_3_9(1, 1);
}