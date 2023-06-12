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
    printf("지구와 달 사이의 평균 거리는 %6.2lfkm이다.\n",avg_v);
    printf("지구와 달 사이 중간 지점에 위치한 질량 %6.2lf * 10^%6.2lfkg인 \n", m, a);
    printf("우주선이 지구와 달에 의해 받는 알짜 중력은 얼마인가? \n");
    printf("지구의 질량은 %6.2lf * 10^6.2lfkg이고, 달의 질량은 %6.2lf * 10^%6.2lfkg이다.\n\n", em, b, mm, c);
    printf("(a) 우주선이 지구와 달에 의해 받는 알짜 중력은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 우주선이 지구와 달에 의해 받는 알짜 중력은 얼마인가?\n\n");
        printf("관련 공식은 Fg = G * (m / r^2) * (M1 - M2)");
        printf("Fg: 알짜 중력, G: 만유인력 상수, m: 질량, M1: 지구의 질량, M2: 달의 질량\n\n ");
        printf("Fg = G * (m / r^2) * (M1 - M2)\n");
        printf("   = %6.2lf * (%6.2lf / %6.2lf) * (%6.2lf - %6.2lf)\n",G, m, );
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        
    }
}
int main(void)
{
    Excersize_5_13(1, 1);
}