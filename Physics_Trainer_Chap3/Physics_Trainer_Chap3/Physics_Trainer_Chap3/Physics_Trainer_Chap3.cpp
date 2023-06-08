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

void Excersize_3_3(int solution, int answer)  //�Ѷ���б� �̷������Ƽ���а� �Ѽ���
{
    srand(time(NULL)); 
    double angle = 210 + rand() % (5 + 1) - 3;
    double m = 30 + rand() % (5 + 1) - 3;

    double x = (m)*cos(DEG2RAD(angle));
    double y = (m)*sin(DEG2RAD(angle));

    printf("\n\n");
    printf("3-3 \n");
    printf("�� ������ ũ�Ⱑ %6.2lfm �̰� ������ %6.2lf�� ��� �Ѵ�.\n", m, angle);
    printf("�� ������ x ���а� y ������ ���Ͻÿ�. \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("�� ������ x ������ ���Ͻÿ�.\n");
        printf("���� ������ x = m * cos�� �Դϴ�.\n");
        printf("x: ����, m: �Ÿ�, cos��: x����\n\n");

        printf("x = %6.2lfm * cos(%6.2lf��)  \n", m, angle);
        printf("  = %6.2lfm\n\n", x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("x = %6.2lfm \n", x);

    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   ============================\n\n");
        printf("�� ������ y ������ ���Ͻÿ�.\n");
        printf("���� ������ y = m * sin�� �Դϴ�.\n");
        printf("y: ����, m: �Ÿ�, sin��: y����\n\n"); \

            printf("y  = %6.2lfm * sin(%6.2lf��) \n", m, angle);
        printf("   = %6.2lfm \n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("y  = %6.2lfm \n\n", y);

        printf("=================================================================\n\n");
        printf("\n\n\n");
    }
}

void Excersize_3_5(int solution, int answer)  //�Ѷ���б� �̷������Ƽ���а� �ȼ�ȣ
{
    srand(time(NULL));

    double A = 14 + rand() % (5 + 1) - 1;
    double B = 20 + rand() % (4 + 1) - 1;
    double A�� = 60 + rand() % (6 + 1) - 3;
    double A��_radian;
    double radtodeg = M_PI / 180;
    A��_radian = A�� * radtodeg;
    double B�� = 20 + rand() % (2 + 1) - 1;
    double B��_radian;
    B��_radian = B�� * radtodeg;
    double Ax = 0, Ay = 0;
    Ax = A * cos(A��_radian);
    Ay = A * sin(A��_radian);
    double Bx = 0, By = 0;
    Bx = B * cos(B��_radian);
    By = B * sin(B��_radian);
    double C;
    double C��_radian = 0;
    double C�� = 0;
    double Cx, Cy;

    printf("\n\n");
    printf("3-5 \n");
    printf("�׸� P3-5�� ���� �� ���� A�� B�� �ִ�. ���� A�� x��� %6.2lf�ƹ������� ���̰� %6.2lfcm�̴�.\n �׸��� ���� B�� x��� %6.2lf�ƹ������� ���� %6.2lfcm��� �Ѵ�. \n�� ������ �պ����� ���̿� x���̷�� ���� ���϶�.\n\n", A��,A, B��,B);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("���� A�� ���� B�� �պ��͸� ���ϰ� �� ���Ͱ� �̷�� ���� ���Ͽ���\n");
        printf("���� ������ x = A * cos��\n");
        printf("x: x����, A: ������ ũ��, ��: ��\n");
        printf("            y = A * sin��\n");
        printf("y: y����, A: ������ ũ��, ��: ��\n\n");
        printf("���� A�� x���� = A * cos��\n");
        printf("               =%6.2lfcm * cos%6.2lf��\n", A, A��);
        printf("               =%6.2lf\n", Ax);
        printf("         y���� = A * sin��\n");
        printf("               =%6.2lfcm * sin%6.2lf��\n", A, A��);
        printf("               =%6.2lf\n", Ay);
        printf("���� B�� x���� = B * cos��\n");
        printf("               =%6.2lfcm * cos%6.2lf��\n", B, B��);
        printf("               =%6.2lf\n", Bx);
        printf("         y���� = B * sin��\n");
        printf("               =%6.2lfcm * sin%6.2lf��\n", B, B��);
        printf("               =%6.2lf\n\n", By);
        printf("���� A�� ���� B�� �պ��ʹ� ���� C\n");
        printf("���� C = ���� A + ���� B = (Ax + Bx)i + (Ay + By)j = Cx + Cy\n");
        printf("Cx  = Ax + Bx\n");
        printf("    =%6.2lfcm +%6.2lfcm\n", Ax, Bx);
        Cx = Ax + Bx;
        printf("    = %6.2lfcm\n", Cx);
        printf("Cy  = Ay + By\n");
        printf("    =%6.2lfcm +%6.2lfcm\n", Ay, By);
        Cy = Ay + By;
        printf("    = %6.2lfcm\n\n", Cy);
        printf("�պ��� C�� x��� �̷�� ���� ���ؾ��Ѵ�.\n");
        printf("���� ������ tan�� = Cy / Cx\n");
        printf("��: �� x: x���� y: y����\n\n");
        printf("tan�� = Cy / Cx\n");
        printf("�� = atan(Cy / Cx)\n");
        C��_radian = atan(Cy / Cx);
        C�� = C��_radian / radtodeg;
        printf("   = atan(%6.2lfcm /%6.2lfcm)\n", Cy, Cx);
        printf("   =%6.2lf��\n\n", C��);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("Cx =%6.2lfcm Cy =%6.2lfcm �� =%6.2lf��\n\n", Cx, Cy, C��);
    }
}
void Excersize_3_7(int solution, int answer)  //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
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
    printf("��� ������ x������ %6.2lf �����̰� y������ %6.2lf �����̴�.\n", x, y);
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
        printf("  = ��((%6.2lf)^2 + (%6.2lf)^2)\n", x, y);
        printf("  = %6.2lf\n\n", S);
    }

    if (answer == SHOW)
    {
        printf("============================ �� �� ============================\n\n");
        printf("������ ũ�� = %6.2lf\n", S);
    }

    if (solution == SHOW)
    {
        tan1 = y / x;
        ��_rad = atan2(y, x); //atan�� 90���� -90�� ���̿��� ǥ��������, atan2�� 180���� -180�� ���̿��� ǥ���ȴ�.
        �� = ��_rad / radtodeg;
        printf("\n");
        printf("============================ Ǯ �� ============================\n\n");
        printf("�� ������ ������ ���϶�.\n\n");
        printf("���� ������ tan�� = Ay / Ax\n");
        printf("Ax: ���� A�� x����, Ay: ���� A�� y����, ��: ������ ����\n\n");
        printf("tan��  = Ay / Ax \n");
        printf("��  = atan(Ay / Ax) \n");
        printf("   = atan(% 6.2lf / % 6.2lf)\n", y, x);
        printf("   = %6.2lf��\n\n", ��);
    }

    if (solution == SHOW)
    {
        printf("============================ �� �� ============================\n\n");
        printf("������ ���� = %6.2lf��\n\n", ��);
        printf("===============================================================\n\n");

    }
}
void Excersize_3_11(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));

    //  ���� ���� ����
    const double PI = 3.141592653;
    double delta_height = 250 + rand() % (15 + 1) - 5;
    double a = 3.80 + rand() % (2 + 1);
    double degree = 30.0 + rand() % (14 + 1);
    double ay;
    double time_1;
    double t;
    double v0y = 0;



    printf("\n\n");
    printf("3-11 \n");
    printf("��Ű ������%6.2lf m/s^2�� ���ӵ���%6.2lf���� ��縦 ���� ���ӵǰ� �ִ�.\n", a, degree);
    printf("��,��Ű ������ �������¿��� �߶��ϰ� ���ӵ��� �����ϴ�.\n\n");

    printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");

    printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");
        // your code here
        printf("���� ������ ay = a * sin��\n");
        printf("ay : ���ӵ��� ��������, a : ���ӵ�, sin�� : �ﰢ�Լ����� y ����\n\n");

        ay = a * (sin(degree * PI / 180));
        printf("ay = a * sin��\n");
        printf("   = %6.2lf m/s^2 * sin%6.2lf��\n", a, degree);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);
        // your code here   
        printf("���� ������ ��y = v0y * t + 1/2 * a * t^2\n");
        printf("��y = ���̺�ȭ��, v0y : y�� �ʱ�ӵ�, a : ���ӵ�, t : �ð�\n\n");

        printf("��y = v0y * t + 1/2 * a * t^2\n");
        printf("%6.2lf m = (%6.2lf * t) + ((1/2) *%6.2lf m/s^2 * t^2)\n\n", delta_height, v0y, ay);

        time_1 = ((2 * delta_height) / (ay));

        printf("t^2 = (%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2)\n", v0y, delta_height, ay);
        printf("    = %6.2lf s\n\n", time_1);

        t = sqrt((2 * delta_height) / (ay));

        printf("t = sqrt((%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2))\n", v0y, delta_height, ay);
        printf("  = %6.2lf s\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

}

void Excersize_3_13(int solution, int answer)
{
    srand(time(NULL));

    double h = 0;
    double g = 9.80;
    double t;
    double v0x = 5 + rand() % (2 + 1) - 1;
    double ��x = 20 + rand() % (2 + 1) - 1;
    t = ��x / v0x;
    double ��y;

    printf("\n\n");
    printf("3-13 \n");
    printf("�׸� P3-13�� ���� ���̰� h�� ������ ���� ����������� %6.2lfm/s�� �ӷ����� �������� ����Ÿ� %6.2lfm�� ���� ��������.\n\n", v0x, ��x);
    printf("(a) �� ���� ���鿡 ������ ������ �ɸ� �ð��� �� ���ΰ�? \n\n");
    printf("(b) ó�� ���� ���� ������ ���� h�� �� m�ΰ�? \n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) �� ���� ���鿡 ������ ������ �ɸ� �ð��� �� ���ΰ�? \n");
        printf("���� ������ ��x = v0x * t\n");
        printf("��x: x�� ��ȭ�� v0x: �ʱ�ӵ� t: �ð�\n\n");
        printf("��x = v0x * t\n");
        printf("t = ��x / v0x\n");
        printf("  =%6.2lfm /%6.2lfm/s\n", ��x, v0x);
        printf("  =%6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("�ɸ� �ð� t =%6.2lfs\n", t);
    }
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) ó�� ���� ���� ������ ���� h�� �� m�ΰ�?\n");
        printf("���� ������ ��y = vo * t + 1/2 * a * t^2\n");
        printf("��y: y�� ��ȭ�� v0y: �ʱ�ӵ� t: �ð� a: ���ӵ�\n\n");
        printf("�����ϱ��� ���� �����̱� ������ v0y = 0 �Դϴ�.\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -9.80m/s^2 �Դϴ�. \n\n");

        printf("��y = voy * t + 1/2 * a * t^2\n");
        printf("    = 0 * t + 1/2 * (-g) * t^2\n");
        printf("    = 1/2 * %6.2lfm/s^2 * (%6.2lfm/s)^2\n", -g, pow(t, 2));
        ��y = -g * pow(t, 2) / 2;
        printf("    = %6.2lfm\n\n", ��y);
        printf("��y = 0 - h\n");
        printf("h = %6.2lfm\n\n", -��y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("h =%6.2lfm \n", -��y);
    }
}
void Excersize_3_15(int solution, int answer)
{

    double height = 490;
    height = 490 + rand() % (49 + 1) - 29.5;
    double first_height = 0;
    double down = 100;
    down = 100 + rand() % (10 + 1) - 5;
    double initial_speed = 0;
    double gravitational_acceleration = -9.8;
    double time = sqrt((height * 2 / -gravitational_acceleration));
    double super_speed = down / time;

    printf("\n\n");
    printf("3-15 \n");
    printf("���� %6.2lfm�� ������ ����������� ���� ��ü�� ���� ������\n", height);
    printf("����������� %6.2lfm�� ���� ��������.\n\n", down);
    printf("(a)�� ��ü�� ���� ������ ������ �ɸ� �ð��� ���ΰ�?\n\n");
    printf("(b)��ü�� �ʼӵ��� ���ΰ�?\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a)�� ��ü�� ���� ������ ������ �ɸ� �ð��� ���ΰ�?\n\n");
        printf("���ð����� y = y0 + v0yt + 1/2(-g)t^2 �Դϴ�. \n");
        printf("y: ����, y0: �ʱ� ���� ,v0yt: �ʱ� �ӵ� ,g: �߷� ���ӵ� ,t: �ð�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", gravitational_acceleration);
        printf("y      = y0 + v0yt + 1/2(-g)t^2\n\n");
        printf("%6.2lf = %6.2lfm + %6.2lfm/s + 1/2%6.2lft^2\n", first_height, height, initial_speed, gravitational_acceleration);
        printf("t^2    = %6.2lfm * 2 /%6.2lfm/s^2\n", height, -gravitational_acceleration);
        printf("       = %6.2lfs\n\n", time);
        printf("");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("t = %6.2lfs\n", time);
        printf("");
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b)��ü�� �ʼӵ��� ���ΰ�?\n\n");
        printf("���ð����� ��x = v0x * t \n");
        printf("��x:����������� ������ �Ÿ� ,v0xt: �ʼӵ�, t: �ð�\n\n");
        printf("��x      = v0x * t\n\n");
        printf("%6.2lfm = v0x * %6.2lfs\n", down, time);
        printf("v0x     = %6.2lfm / %6.2lfs\n", down, time);
        printf("        = %6.2lfm/s\n", super_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v0x = %6.2lfm/s\n\n", super_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
void Excersize_3_17(int solution, int answer)
{
    double r_h = 35.0 + rand() % (10 + 1) - 3;;
    double h = 5.0 + rand() % (8 + 1) - 4;
    double g = 9.80;
    double time = 0.0;
    double x = 0.0;

    printf("\n\n");
    printf("3_17 \n");
    printf("���̺� �� �� �ִ� �庮�� �ִ� . ���̺� ������ ���鿡�� %6.2lf m ���̿� �ִ� ���� �÷������� �������� �پ������,\n", r_h);
    printf("�پ�� ���� �ٷ� �Ʒ��� �������� ���� %6.2lf m ���� �ٴٸ� ���� ����� �ִ� ������ �پ�Ѿ�� �Ѵ�. \n\n", h);
    printf("(a) : �� ������ ���߿� �ӹ��� �ִ� �ð��� �� �ΰ�? \n\n");
    printf("(b) : �׷��� ���ؼ� �ʿ��� �ּ����� ��� �ӷ��� �� �ΰ�? \n\n");
    printf("(c) : �׸��� ���̺� ������ ����������� �پ���� �ϴ� ������ �����ΰ�? \n\n");

    if (solution == SHOW)
    {
        time = r_h * 2 / g;


        printf("\n\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("(a) : �� ������ ���߿� �ӹ��� �ִ� �ð��� �� �ΰ�? \n\n");
        printf("���� ������ ��y = v0yt + 1/2(-g)t^2 �Դϴ�.\n");
        printf("��y:���̺�ȭ��, v0yt:�ʱ�ӵ�, a:���ӵ�, t:�ð� \n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -9.80m/s^2 �Դϴ�.\n\n");
        printf("     ��y = v0y * t + 1/2 * (-g) * t^2 \n");
        printf("-%6.2lf = 0 * t + 1/2 * (-g) * t^2 \n", r_h, g);
        printf("    t^2 = %6.2lf * 2m / %6.2lf m/s^2 \n", r_h, g);
        printf("     t  = %6.2lfm \n", sqrt(time));



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf(" t = %6.2lfm \n\n", sqrt(time));

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)
    {
        x = h / time;


        printf("============================  Ǯ ��  =============================\n\n");

        printf("(b) : �׷��� ���ؼ� �ʿ��� �ּ����� ��� �ӷ��� �� �ΰ�? \n\n");
        printf("���� ������ ��x = v0x * t�Դϴ�.\n");
        printf("��x:�������Ÿ�, v0xt:�ʼӵ�, t:�ð� \n\n");

        printf("     ��x = v0x * t\n");
        printf("%6.2lfm = vox * %6.2lfs \n", h, time);
        printf("    vox = %6.2lfm / %6.2lfs \n", h, time);
        printf("    vox =  %6.2lfm/s \n", x);



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf(" vox =  %6.2lfm/s \n\n", x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)
    {
        printf("============================  Ǯ ��  =============================\n\n");

        printf("(c) : �׸��� ���̺� ������ ����������� �پ���� �ϴ� ������ �����ΰ�? \n\n");
        printf("�����ʱ� �ӵ� �����ؾ߸� x�� �Ÿ��� �����Ǳ� �����̴�.\n");



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�����ʱ� �ӵ� �����ؾ߸� x�� �Ÿ��� �����Ǳ� �����̴�.\n\n");

        printf("=================================================================\n\n");
        printf("\n\n\n");
    }
}
void Excersize_3_19(int solution, int answer)
{
    srand(time(NULL));
    double t1 = 4 + rand() % (4 + 1);
    double t2 = 0;
    double g = 9.8;
    double v0y = 0;
    double H = 0;
    double ��x = 80 + rand() % (3 + 1);
    double v0x = 0;
    double v = 0;

    printf("\n\n");
    printf("3-19\n");
    printf("���� �񽺵��� �������� %6.2lf s �Ŀ� %6.2lf m ���濡 ��������.\n\n", t1, ��x);
    printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n\n");
    printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n");

    if (solution == SHOW)
    {
        t2 = t1 / 2;
        H = (g / 2) * t2 * t2;
        printf("\n\n\n");
        printf("============================ Ǯ �� ============================\n\n");
        printf("(a) ���� �ö� �ְ� ���̴� ���ΰ�?\n\n");
        printf("���� ������ ��y = v0y * t + 1/2 * a * t^2  \n");
        printf("��y: ���� ��ȭ��, v0y: �ʱ� �ӵ�, t: �ð�, a: ���ӵ�, H: �ְ� ����\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n", -g);
        printf("���� ���� �Ŀ� �ְ� �����϶��� �ð��� %6.2lfs / 2 = %6.2lfs �� t = %6.2lfs �Դϴ�.\n\n", t1, t2, t2);
        printf("��y = 0 - H\n");
        printf("   = v0y * t + 1/2 * a * t^2\n\n");
        printf("0 - H = v0y * t + 1/2 * (-g) * t^2  \n");
        printf("H     = -(% 6.2lfm/s * %6.2lfs) + 1/2 * %6.2lfm/s^2 * (%6.2lfs)^2\n", v0y, t2, g, t2);
        printf("      = %6.2lfm\n\n", H);
    }
    if (answer == SHOW)
    {
        printf("============================ �� �� ============================\n\n");
        printf("H = %6.2lfm\n\n", H);
    }
    if (solution == SHOW)
    {
        v0x = ��x / t1;
        v = sqrt((v0x) * (v0x));
        printf("============================ Ǯ �� ============================\n\n");
        printf("(b) �ְ��������� ���� �ӵ��� ���ΰ�?\n\n");
        printf("���� ������ ��x = v0x * t, v = ��(v0x^2 + v0y^2)\n");
        printf("v0x: x�� �ʱ� �ӵ�, v0y: y�� �ʱ� �ӵ�, ��x: ������ �Ÿ�, t: �ð�, v: �ӵ�\n\n");
        printf("��x = v0x * t\n\n");
        printf("v0x = ��x / t\n");
        printf("    = %6.2lfm / %6.2lfs\n", ��x, t1);
        printf("    = %6.2lfm/s\n\n", v0x);
        printf("v = ��(v0x^2 + v0y^2)\n");
        printf("  = ��((%6.2lfm/s)^2 + (%6.2lfm/s)^2)\n", v0x, v0y);
        printf("  = %6.2lfm/s\n\n", v);
    }
    if (answer == SHOW)
    {
        printf("============================ �� �� ============================\n\n");
        printf("v = %6.2lfm/s\n\n", v);
        printf("===============================================================\n\n");
    }
}
void Excersize_3_25(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  ���� ���� ����
    double height = 0;
    double g = 9.80;
    double degree = 45 + rand() % (7 + 1);
    double velocity_0 = 28 + rand() % (5 + 1);
    double v0y;
    double height_0 = 1.6 + rand() % (1 + 1);
    double delta_x;
    double time_1;
    double a;
    double b;
    double c;
    double d;
    double e;

    printf("\n\n");
    printf("3-25 \n");
    printf("�߱� ������ �������κ��� %6.2lf m�� ���̿��� ���� �� %6.2lf���������� �ʼӵ� %6.2lf m/s�� �߱����� ������. \n", height_0, degree, velocity_0);
    printf("�� ������ �߾Ʒ����� ���� �������� ��������� �Ÿ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ v0y = v0 * sin��\n");
        printf("cos�� : �ﰢ�Լ����� x ����, sin�� : �ﰢ�Լ����� y ����\n");
        printf("v0y : y�� �ʱ�ӵ�, a : ���ӵ�\n\n");

        v0y = velocity_0 * (sin(degree * PI / 180));

        printf("v0y = v0 * sin��\n");
        printf("    = %6.2lf m/s * sin%6.2lf��\n", velocity_0, degree);
        printf("    = %6.2lf m/s\n\n", v0y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v0y = %6.2lf m/s\n\n", v0y);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here   
        printf("���� ������ y = y0 + v0y * t + 1/2 * g * t^2\n");
        printf("y = ���߳���, y0 : �ʱ����, v0y : y�� �ʱ�ӵ�, g : �߷°��ӵ�\n");
        printf("t : �ð�, cos�� : �ﰢ�Լ����� x ����, sin�� : �ﰢ�Լ����� y ����\n\n");

        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lf m/s^2�Դϴ�.\n\n", g);

        printf("y = y0 + v0y * t + 1/2 * a * t^2\n\n");
        printf("%6.2lf m = %6.2lf m + (%6.2lf m/s * sin%6.2lf�� * t) + ((1 / 2) * (-%6.2lf m/s^2 ) * t^2)\n\n", height, height_0, velocity_0, degree, g);

        a = 0.5 * (-g);
        b = v0y;
        c = height_0;

        printf("at^2 + bt + c = 0\n", a, b, c);
        printf("(%6.2lf m/s^2 * t^2) + (%6.2lf m/s * t) + %6.2lf m = 0\n\n", a, b, c);

        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        time_1 = (-b - e) / (2.0 * a);
        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ ��x = v0x * t\n");
        printf("��x = �Ÿ���ȭ��, v0x : x�� �ʱ�ӵ�, v0 : �ʱ�ӵ�, t : �ð�\n");
        printf("cos�� : �ﰢ�Լ����� x ����\n\n");

        delta_x = velocity_0 * (cos(degree * PI / 180)) * time_1;

        printf("��x  = v0x * t\n");
        printf("    = v0 * cos�� * t\n");
        printf("    = %6.2lf m/s * cos%6.2lf�� * %6.2lf s\n", velocity_0, degree, time_1);
        printf("    = %6.2lf m\n\n", delta_x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m\n\n", delta_x);

        printf("=================================================================\n");
        printf("\n\n\n");
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

    //Excersize_3_3(Show_Solution, Answer);     //�Ѷ���б� �̷������Ƽ���а� �Ѽ���
    //Excersize_3_5(Show_Solution, Answer);     //�Ѷ���б� �̷������Ƽ���а� �ȼ�ȣ
    //Excersize_3_7(Show_Solution, Answer);     //�Ѷ���б� �̷������Ƽ���а� ������
    //Excersize_3_9(Show_Solution, Answer);     //�Ѷ���б� �̷������Ƽ���а� ������(�����)
    //Excersize_3_11(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ������
    //Excersize_3_13(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� �ȼ�ȣ
    //Excersize_3_15(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ��â��
    //Excersize_3_17(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ȫ�漭
    //Excersize_3_19(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ������
    //Excersize_3_21(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ������(�����)
    //Excersize_3_23(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� �Ѽ���(�����)
    //Excersize_3_25(Show_Solution, Answer);    //�Ѷ���б� �̷������Ƽ���а� ������
}