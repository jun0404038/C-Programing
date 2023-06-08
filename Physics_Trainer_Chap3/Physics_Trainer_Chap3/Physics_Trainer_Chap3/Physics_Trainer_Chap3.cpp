#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_3_3(int solution, int answer)  //한라대학교 미래모빌리티공학과 한석희
{
    srand(time(NULL)); 
    double angle = 210 + rand() % (5 + 1) - 3;
    double m = 30 + rand() % (5 + 1) - 3;

    double x = (m)*cos(DEG2RAD(angle));
    double y = (m)*sin(DEG2RAD(angle));

    printf("\n\n");
    printf("3-3 \n");
    printf("한 변위의 크기가 %6.2lfm 이고 방향이 %6.2lf° 라고 한다.\n", m, angle);
    printf("이 변위의 x 성분과 y 성분을 구하시오. \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("이 변위의 x 성분을 구하시오.\n");
        printf("관련 공식은 x = m * cosΘ 입니다.\n");
        printf("x: 변위, m: 거리, cosΘ: x성분\n\n");

        printf("x = %6.2lfm * cos(%6.2lf°)  \n", m, angle);
        printf("  = %6.2lfm\n\n", x);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("x = %6.2lfm \n", x);

    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   ============================\n\n");
        printf("이 변위의 y 성분을 구하시오.\n");
        printf("관련 공식은 y = m * sinΘ 입니다.\n");
        printf("y: 변위, m: 거리, sinΘ: y성분\n\n"); \

            printf("y  = %6.2lfm * sin(%6.2lf°) \n", m, angle);
        printf("   = %6.2lfm \n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("y  = %6.2lfm \n\n", y);

        printf("=================================================================\n\n");
        printf("\n\n\n");
    }
}

void Excersize_3_5(int solution, int answer)  //한라대학교 미래모빌리티공학과 안성호
{
    srand(time(NULL));

    double A = 14 + rand() % (5 + 1) - 1;
    double B = 20 + rand() % (4 + 1) - 1;
    double Aθ = 60 + rand() % (6 + 1) - 3;
    double Aθ_radian;
    double radtodeg = M_PI / 180;
    Aθ_radian = Aθ * radtodeg;
    double Bθ = 20 + rand() % (2 + 1) - 1;
    double Bθ_radian;
    Bθ_radian = Bθ * radtodeg;
    double Ax = 0, Ay = 0;
    Ax = A * cos(Aθ_radian);
    Ay = A * sin(Aθ_radian);
    double Bx = 0, By = 0;
    Bx = B * cos(Bθ_radian);
    By = B * sin(Bθ_radian);
    double C;
    double Cθ_radian = 0;
    double Cθ = 0;
    double Cx, Cy;

    printf("\n\n");
    printf("3-5 \n");
    printf("그림 P3-5와 같이 두 벡터 A와 B가 있다. 벡터 A는 x축과 %6.2lf°방향으로 길이가 %6.2lfcm이다.\n 그리고 벡터 B는 x축과 %6.2lf°방향으로 길이 %6.2lfcm라고 한다. \n두 벡터의 합벡터의 길이와 x축이루는 각을 구하라.\n\n", Aθ,A, Bθ,B);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("벡터 A와 벡터 B의 합벡터를 구하고 두 벡터가 이루는 각을 구하여라\n");
        printf("관련 공식은 x = A * cosθ\n");
        printf("x: x성분, A: 벡터의 크기, θ: 각\n");
        printf("            y = A * sinθ\n");
        printf("y: y성분, A: 벡터의 크기, θ: 각\n\n");
        printf("벡터 A의 x성분 = A * cosθ\n");
        printf("               =%6.2lfcm * cos%6.2lf°\n", A, Aθ);
        printf("               =%6.2lf\n", Ax);
        printf("         y성분 = A * sinθ\n");
        printf("               =%6.2lfcm * sin%6.2lf°\n", A, Aθ);
        printf("               =%6.2lf\n", Ay);
        printf("벡터 B의 x성분 = B * cosθ\n");
        printf("               =%6.2lfcm * cos%6.2lf°\n", B, Bθ);
        printf("               =%6.2lf\n", Bx);
        printf("         y성분 = B * sinθ\n");
        printf("               =%6.2lfcm * sin%6.2lf°\n", B, Bθ);
        printf("               =%6.2lf\n\n", By);
        printf("벡터 A와 벡터 B의 합벡터는 벡터 C\n");
        printf("벡터 C = 벡터 A + 벡터 B = (Ax + Bx)i + (Ay + By)j = Cx + Cy\n");
        printf("Cx  = Ax + Bx\n");
        printf("    =%6.2lfcm +%6.2lfcm\n", Ax, Bx);
        Cx = Ax + Bx;
        printf("    = %6.2lfcm\n", Cx);
        printf("Cy  = Ay + By\n");
        printf("    =%6.2lfcm +%6.2lfcm\n", Ay, By);
        Cy = Ay + By;
        printf("    = %6.2lfcm\n\n", Cy);
        printf("합벡터 C와 x축과 이루는 각을 구해야한다.\n");
        printf("관련 공식은 tanθ = Cy / Cx\n");
        printf("θ: 각 x: x성분 y: y성분\n\n");
        printf("tanθ = Cy / Cx\n");
        printf("θ = atan(Cy / Cx)\n");
        Cθ_radian = atan(Cy / Cx);
        Cθ = Cθ_radian / radtodeg;
        printf("   = atan(%6.2lfcm /%6.2lfcm)\n", Cy, Cx);
        printf("   =%6.2lf°\n\n", Cθ);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("Cx =%6.2lfcm Cy =%6.2lfcm θ =%6.2lf°\n\n", Cx, Cy, Cθ);
    }
}
void Excersize_3_7(int solution, int answer)  //한라대학교 미래모빌리티공학과 서형준
{
    srand(time(NULL));
    double x = -25 + rand() % (4 + 1);
    double y = 40 + rand() % (3 + 1);
    double S = 0;
    double tan1 = 0;
    double tan2 = 0;
    double θ_rad = 0;
    double θ = 0;
    double radtodeg = M_PI / 180;

    printf("\n\n");
    printf("3-7\n");
    printf("어느 벡터의 x성분은 %6.2lf 단위이고 y성분은 %6.2lf 단위이다.\n", x, y);
    printf("이 벡터의 크기와 방향을 구하라.\n");

    if (solution == SHOW)
    {
        S = sqrt((x * x) + (y * y));
        printf("\n\n\n");
        printf("============================ 풀 이 ============================\n\n");
        printf("이 벡터의 크기를 구하라.\n\n");
        printf("관련 공식은 S = √(Ax^2 + Ay^2)\n");
        printf("Ax: 벡터 A의 x성분, Ay: 벡터 A의 y성분, S: 벡터의 크기\n\n");
        printf("S = √(Ax^2 + Ay^2)\n");
        printf("  = √((%6.2lf)^2 + (%6.2lf)^2)\n", x, y);
        printf("  = %6.2lf\n\n", S);
    }

    if (answer == SHOW)
    {
        printf("============================ 정 답 ============================\n\n");
        printf("벡터의 크기 = %6.2lf\n", S);
    }

    if (solution == SHOW)
    {
        tan1 = y / x;
        θ_rad = atan2(y, x); //atan는 90도와 -90도 사이에서 표현되지만, atan2는 180도와 -180도 사이에서 표현된다.
        θ = θ_rad / radtodeg;
        printf("\n");
        printf("============================ 풀 이 ============================\n\n");
        printf("이 벡터의 방향을 구하라.\n\n");
        printf("관련 공식은 tanθ = Ay / Ax\n");
        printf("Ax: 벡터 A의 x성분, Ay: 벡터 A의 y성분, θ: 벡터의 방향\n\n");
        printf("tanθ  = Ay / Ax \n");
        printf("θ  = atan(Ay / Ax) \n");
        printf("   = atan(% 6.2lf / % 6.2lf)\n", y, x);
        printf("   = %6.2lf°\n\n", θ);
    }

    if (solution == SHOW)
    {
        printf("============================ 정 답 ============================\n\n");
        printf("벡터의 방향 = %6.2lf°\n\n", θ);
        printf("===============================================================\n\n");

    }
}
void Excersize_3_11(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));

    //  변수 선언 지역
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
    printf("스키 선수가%6.2lf m/s^2의 가속도로%6.2lf˚의 경사를 따라 가속되고 있다.\n", a, degree);
    printf("단,스키 선수는 정지상태에서 추락하고 가속도는 일정하다.\n\n");

    printf("(a) 가속도의 수직성분은 얼마인가?\n\n");

    printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 가속도의 수직성분은 얼마인가?\n\n");
        // your code here
        printf("관련 공식은 ay = a * sinθ\n");
        printf("ay : 가속도의 수직성분, a : 가속도, sinθ : 삼각함수에서 y 성분\n\n");

        ay = a * (sin(degree * PI / 180));
        printf("ay = a * sinθ\n");
        printf("   = %6.2lf m/s^2 * sin%6.2lf˚\n", a, degree);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);
        // your code here   
        printf("관련 공식은 Δy = v0y * t + 1/2 * a * t^2\n");
        printf("Δy = 높이변화량, v0y : y의 초기속도, a : 가속도, t : 시간\n\n");

        printf("Δy = v0y * t + 1/2 * a * t^2\n");
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
        printf("=========================   정 답   =============================\n\n");

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
    double Δx = 20 + rand() % (2 + 1) - 1;
    t = Δx / v0x;
    double Δy;

    printf("\n\n");
    printf("3-13 \n");
    printf("그림 P3-13과 같이 높이가 h인 곳에서 돌을 수평방향으로 %6.2lfm/s의 속력으로 던졌더니 수평거리 %6.2lfm인 곳에 떨어졌다.\n\n", v0x, Δx);
    printf("(a) 이 돌이 지면에 떨어질 때까지 걸린 시간은 몇 초인가? \n\n");
    printf("(b) 처음 돌을 던진 순간의 높이 h는 몇 m인가? \n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) 이 돌이 지면에 떨어질 때까지 걸린 시간은 몇 초인가? \n");
        printf("관련 공식은 Δx = v0x * t\n");
        printf("Δx: x의 변화량 v0x: 초기속도 t: 시간\n\n");
        printf("Δx = v0x * t\n");
        printf("t = Δx / v0x\n");
        printf("  =%6.2lfm /%6.2lfm/s\n", Δx, v0x);
        printf("  =%6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("걸린 시간 t =%6.2lfs\n", t);
    }
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 처음 돌을 던진 순간의 높이 h는 몇 m인가?\n");
        printf("관련 공식은 Δy = vo * t + 1/2 * a * t^2\n");
        printf("Δy: y의 변화량 v0y: 초기속도 t: 시간 a: 가속도\n\n");
        printf("시작하기전 정지 상태이기 때문에 v0y = 0 입니다.\n");
        printf("중력가속도는 아래 방향이므로 -9.80m/s^2 입니다. \n\n");

        printf("Δy = voy * t + 1/2 * a * t^2\n");
        printf("    = 0 * t + 1/2 * (-g) * t^2\n");
        printf("    = 1/2 * %6.2lfm/s^2 * (%6.2lfm/s)^2\n", -g, pow(t, 2));
        Δy = -g * pow(t, 2) / 2;
        printf("    = %6.2lfm\n\n", Δy);
        printf("Δy = 0 - h\n");
        printf("h = %6.2lfm\n\n", -Δy);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("h =%6.2lfm \n", -Δy);
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
    printf("높이 %6.2lfm인 곳에서 수평방향으로 던진 물체가 던진 곳에서\n", height);
    printf("수평방향으로 %6.2lfm인 곳에 떨어졌다.\n\n", down);
    printf("(a)이 물체가 땅에 떨어질 때까지 걸린 시간은 얼마인가?\n\n");
    printf("(b)물체의 초속도는 얼마인가?\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a)이 물체가 땅에 떨어질 때까지 걸린 시간은 얼마인가?\n\n");
        printf("관련공식은 y = y0 + v0yt + 1/2(-g)t^2 입니다. \n");
        printf("y: 높이, y0: 초기 높이 ,v0yt: 초기 속도 ,g: 중력 가속도 ,t: 시간\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", gravitational_acceleration);
        printf("y      = y0 + v0yt + 1/2(-g)t^2\n\n");
        printf("%6.2lf = %6.2lfm + %6.2lfm/s + 1/2%6.2lft^2\n", first_height, height, initial_speed, gravitational_acceleration);
        printf("t^2    = %6.2lfm * 2 /%6.2lfm/s^2\n", height, -gravitational_acceleration);
        printf("       = %6.2lfs\n\n", time);
        printf("");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("t = %6.2lfs\n", time);
        printf("");
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b)물체의 초속도는 얼마인가?\n\n");
        printf("관련공식은 △x = v0x * t \n");
        printf("△x:수평방향으로 떨어진 거리 ,v0xt: 초속도, t: 시간\n\n");
        printf("△x      = v0x * t\n\n");
        printf("%6.2lfm = v0x * %6.2lfs\n", down, time);
        printf("v0x     = %6.2lfm / %6.2lfs\n", down, time);
        printf("        = %6.2lfm/s\n", super_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
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
    printf("다이빙 할 수 있는 장벽이 있다 . 다이빙 선수가 수면에서 %6.2lf m 높이에 있는 바위 플랫폼에서 수평으로 뛰어내리지만,\n", r_h);
    printf("뛰어내린 지점 바로 아래에 절벽으로 부터 %6.2lf m 정도 바다를 향해 뻗어나와 있는 바위를 뛰어넘어야 한다. \n\n", h);
    printf("(a) : 이 선수가 공중에 머물러 있는 시간은 얼마 인가? \n\n");
    printf("(b) : 그러기 위해서 필요한 최소한의 출발 속력은 얼마 인가? \n\n");
    printf("(c) : 그리고 다이빙 선수가 수평방향으로 뛰어내려야 하는 이유는 무엇인가? \n\n");

    if (solution == SHOW)
    {
        time = r_h * 2 / g;


        printf("\n\n\n");
        printf("============================  풀 이  =============================\n\n");

        printf("(a) : 이 선수가 공중에 머물러 있는 시간은 얼마 인가? \n\n");
        printf("관련 공식은 Δy = v0yt + 1/2(-g)t^2 입니다.\n");
        printf("Δy:높이변화량, v0yt:초기속도, a:가속도, t:시간 \n\n");
        printf("중력가속도는 아래 방향이므로 -9.80m/s^2 입니다.\n\n");
        printf("     Δy = v0y * t + 1/2 * (-g) * t^2 \n");
        printf("-%6.2lf = 0 * t + 1/2 * (-g) * t^2 \n", r_h, g);
        printf("    t^2 = %6.2lf * 2m / %6.2lf m/s^2 \n", r_h, g);
        printf("     t  = %6.2lfm \n", sqrt(time));



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf(" t = %6.2lfm \n\n", sqrt(time));

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)
    {
        x = h / time;


        printf("============================  풀 이  =============================\n\n");

        printf("(b) : 그러기 위해서 필요한 최소한의 출발 속력은 얼마 인가? \n\n");
        printf("관련 공식은 Δx = v0x * t입니다.\n");
        printf("Δx:수평방향거리, v0xt:초속도, t:시간 \n\n");

        printf("     Δx = v0x * t\n");
        printf("%6.2lfm = vox * %6.2lfs \n", h, time);
        printf("    vox = %6.2lfm / %6.2lfs \n", h, time);
        printf("    vox =  %6.2lfm/s \n", x);



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf(" vox =  %6.2lfm/s \n\n", x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)
    {
        printf("============================  풀 이  =============================\n\n");

        printf("(c) : 그리고 다이빙 선수가 수평방향으로 뛰어내려야 하는 이유는 무엇인가? \n\n");
        printf("수평초기 속도 존재해야만 x축 거리가 생성되기 때문이다.\n");



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("수평초기 속도 존재해야만 x축 거리가 생성되기 때문이다.\n\n");

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
    double Δx = 80 + rand() % (3 + 1);
    double v0x = 0;
    double v = 0;

    printf("\n\n");
    printf("3-19\n");
    printf("공을 비스듬히 던졌더니 %6.2lf s 후에 %6.2lf m 전방에 떨어졌다.\n\n", t1, Δx);
    printf("(a) 공이 올라간 최고 높이는 얼마인가?\n\n");
    printf("(b) 최고점에서의 공의 속도는 얼마인가?\n");

    if (solution == SHOW)
    {
        t2 = t1 / 2;
        H = (g / 2) * t2 * t2;
        printf("\n\n\n");
        printf("============================ 풀 이 ============================\n\n");
        printf("(a) 공이 올라간 최고 높이는 얼마인가?\n\n");
        printf("관련 공식은 Δy = v0y * t + 1/2 * a * t^2  \n");
        printf("Δy: 높이 변화량, v0y: 초기 속도, t: 시간, a: 가속도, H: 최고 높이\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n", -g);
        printf("공을 던진 후에 최고 높이일때의 시간은 %6.2lfs / 2 = %6.2lfs 로 t = %6.2lfs 입니다.\n\n", t1, t2, t2);
        printf("Δy = 0 - H\n");
        printf("   = v0y * t + 1/2 * a * t^2\n\n");
        printf("0 - H = v0y * t + 1/2 * (-g) * t^2  \n");
        printf("H     = -(% 6.2lfm/s * %6.2lfs) + 1/2 * %6.2lfm/s^2 * (%6.2lfs)^2\n", v0y, t2, g, t2);
        printf("      = %6.2lfm\n\n", H);
    }
    if (answer == SHOW)
    {
        printf("============================ 정 답 ============================\n\n");
        printf("H = %6.2lfm\n\n", H);
    }
    if (solution == SHOW)
    {
        v0x = Δx / t1;
        v = sqrt((v0x) * (v0x));
        printf("============================ 풀 이 ============================\n\n");
        printf("(b) 최고점에서의 공의 속도는 얼마인가?\n\n");
        printf("관련 공식은 Δx = v0x * t, v = √(v0x^2 + v0y^2)\n");
        printf("v0x: x의 초기 속도, v0y: y의 초기 속도, Δx: 움직인 거리, t: 시간, v: 속도\n\n");
        printf("Δx = v0x * t\n\n");
        printf("v0x = Δx / t\n");
        printf("    = %6.2lfm / %6.2lfs\n", Δx, t1);
        printf("    = %6.2lfm/s\n\n", v0x);
        printf("v = √(v0x^2 + v0y^2)\n");
        printf("  = √((%6.2lfm/s)^2 + (%6.2lfm/s)^2)\n", v0x, v0y);
        printf("  = %6.2lfm/s\n\n", v);
    }
    if (answer == SHOW)
    {
        printf("============================ 정 답 ============================\n\n");
        printf("v = %6.2lfm/s\n\n", v);
        printf("===============================================================\n\n");
    }
}
void Excersize_3_25(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  변수 선언 지역
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
    printf("야구 선수가 지면으로부터 %6.2lf m의 높이에서 수평 위 %6.2lf˚방향으로 초속도 %6.2lf m/s로 야구공을 던졌다. \n", height_0, degree, velocity_0);
    printf("이 선수의 발아래에서 공이 떨어지는 지면까지의 거리는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 v0y = v0 * sinθ\n");
        printf("cosθ : 삼각함수에서 x 성분, sinθ : 삼각함수에서 y 성분\n");
        printf("v0y : y의 초기속도, a : 가속도\n\n");

        v0y = velocity_0 * (sin(degree * PI / 180));

        printf("v0y = v0 * sinθ\n");
        printf("    = %6.2lf m/s * sin%6.2lf˚\n", velocity_0, degree);
        printf("    = %6.2lf m/s\n\n", v0y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("v0y = %6.2lf m/s\n\n", v0y);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here   
        printf("관련 공식은 y = y0 + v0y * t + 1/2 * g * t^2\n");
        printf("y = 나중높이, y0 : 초기높이, v0y : y의 초기속도, g : 중력가속도\n");
        printf("t : 시간, cosθ : 삼각함수에서 x 성분, sinθ : 삼각함수에서 y 성분\n\n");

        printf("중력가속도는 아래 방향이므로 -%6.2lf m/s^2입니다.\n\n", g);

        printf("y = y0 + v0y * t + 1/2 * a * t^2\n\n");
        printf("%6.2lf m = %6.2lf m + (%6.2lf m/s * sin%6.2lf˚ * t) + ((1 / 2) * (-%6.2lf m/s^2 ) * t^2)\n\n", height, height_0, velocity_0, degree, g);

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
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 Δx = v0x * t\n");
        printf("Δx = 거리변화량, v0x : x의 초기속도, v0 : 초기속도, t : 시간\n");
        printf("cosθ : 삼각함수에서 x 성분\n\n");

        delta_x = velocity_0 * (cos(degree * PI / 180)) * time_1;

        printf("Δx  = v0x * t\n");
        printf("    = v0 * cosθ * t\n");
        printf("    = %6.2lf m/s * cos%6.2lf˚ * %6.2lf s\n", velocity_0, degree, time_1);
        printf("    = %6.2lf m\n\n", delta_x);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lf m\n\n", delta_x);

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

    //Excersize_3_3(Show_Solution, Answer);     //한라대학교 미래모빌리티공학과 한석희
    //Excersize_3_5(Show_Solution, Answer);     //한라대학교 미래모빌리티공학과 안성호
    //Excersize_3_7(Show_Solution, Answer);     //한라대학교 미래모빌리티공학과 서형준
    //Excersize_3_9(Show_Solution, Answer);     //한라대학교 미래모빌리티공학과 송의준(미통과)
    //Excersize_3_11(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 신현서
    //Excersize_3_13(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 안성호
    //Excersize_3_15(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 한창희
    //Excersize_3_17(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 홍경서
    //Excersize_3_19(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 서형준
    //Excersize_3_21(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 송의준(미통과)
    //Excersize_3_23(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 한석희(미통과)
    //Excersize_3_25(Show_Solution, Answer);    //한라대학교 미래모빌리티공학과 신현서
}