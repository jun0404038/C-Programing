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

void Excersize_3_9(int solution, int answer)
{
    srand(time(NULL));
    double v = 41.0;
    double angle = 120.0;
    double angle2 = 90;
    double Θ = 180 - angle;
    double Changed_Speed = 25.0;
    double First_hour = 3.0;
    double Later_hour = 4.5;
    double r = (v * First_hour);
    double theta = 360.0 - angle;
    double x1 = r * cos(DEG2RAD(Θ));
    double y1 = r * sin(DEG2RAD(Θ));
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
    printf("제주도에 태풍이 지나가고 있다.\n");
    printf("속도가 %5.2lf km/h 인 태풍의 눈이 서북쪽 %5.2lf° 방향으로 통과해 지나간다.\n", v, angle);
    printf("%5.2lf h 후 이 태풍의 방향이 북쪽으로 %5.2lf km/h 의 느린 속도로 바뀌었다. \n", First_hour, Changed_Speed);
    printf("제주도를 지난 태풍은 %5.2lf h 후에는 제주도에서 얼마나 멀리 갔을까?\n\n", Later_hour);
    printf("(a) 태풍이 서쪽(x축), 북쪽(y쪽) 방향으로 이동한 거리는 각각 얼마인가?\n\n");
    printf("(b) 태풍이 이동한 총 거리는 얼마인가?\n\n");
    printf("(c) 태풍이 이동한 각(θ)은 얼마인가?\n\n");
    printf("(d) 태풍의 극좌표를 구하여라\n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 태풍이 서쪽(x축), 북쪽(y쪽) 방향으로 이동한 거리는 각각 얼마인가?\n\n");
        printf("관련 공식은 Δx = v * t\n");
        printf("Δx: 거리, v: 속도, t: 시간, r:원점에서 부터 이동한 거리\n");
        printf("cos: 삼각함수에서의 x성분, sin: 삼각함수에서의 y성분 \n");
        printf("x1: 태풍의 서쪽 이동 거리, y1: 태풍의 북쪽 이동 거리\n\n");
        printf("각도의 기준 %5.2lf°는 x축(동쪽) 방향 기준으로 180° - %5.2lf° = %5.2lf°입니다.\n\n", qkdgid, qkdgid, angle);
        printf("태풍이 제주도를 통과한 변위 r =  %5.2lf km/h * %5.2lf h = %5.2lf km\n", v, First_hour, v * First_hour);
        printf("태풍은 북서쪽으로 한번, 북쪽으로 한번 이동하기 때문에 이 두번의 이동거리를 더한 값이 총 거리입니다. \n\n");
        printf("x1 = r * cosθ\n");
        printf("   = %5.2lf km * cos (%5.2lf°) \n", v * First_hour, Θ);
        printf("   = %5.2lfkm\n\n", x1);
        printf("y1 = r * sinθ\n");
        printf("   = %5.2lf km * sin (%5.2lf°) \n", v * First_hour, Θ);
        printf("   =  %5.2lfkm\n\n", y1);
        printf("태풍이 각도를 바꾼 후 변위: %5.2lf km/h * %5.2lf h = %5.2lf km\n", Changed_Speed, Later_hour - First_hour, Changed_Speed * (Later_hour - First_hour));
        printf("태풍은 북쪽(y축)으로만 이동했기 때문에 x성분은 0입니다.\n\n");
        printf("x2 = 0\n\n");
        printf("y2 = %5.2lf km * sin (%5.2lf°)\n", y2, angle2);
        printf("   =  %5.2lfkm\n\n", y2_2);
        printf("서쪽(x축)방향의 총 이동거리: x1 + x2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n", x1, x2, x1 + x2);
        printf("북쪽(y축)방향의 총 이동거리: y1 + y2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n\n", y1, y2_2, y1 + y2_2);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("서쪽(x축)방향의 총 이동거리: x1 + x2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n", x1, x2, x1 + x2);
        printf("북쪽(y축)방향의 총 이동거리: y1 + y2 = %5.2lfkm + %5.2lfkm = %5.2lfkm\n\n", y1, y2_2, y1 + y2_2);
    }
    if (solution = SHOW)
    {
        ra = sqrt(pow(x1 + x2, 2) + pow(y1 + y2_2, 2));
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 태풍이 이동한 총 거리는 얼마인가?\n\n");
        printf("관련 공식은 r = √(x^2 + y^2)\n");
        printf("r: 태풍이 이동한 총 거리, x: 서쪽(x축)방향의 총 이동거리, y: 북쪽(y축)방향의 총 이동거리\n\n");
        printf("x = x1 + x2\n");
        printf("  = %5.2lfkm\n\n", x1+x2);
        printf("y = y1 + y2\n");
        printf("  = %5.2lfkm\n\n",y1+y2_2);
        printf("r = √(x^2 + y^2)\n");
        printf("  = √((%5.2lfkm)^2 + (%5.2lfkm)^2)\n", x1 + x2, y1 + y2_2);
        printf("  = %5.2lfkm\n\n", ra);
    }
    if (answer = SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("r = %5.2lfkm\n\n", ra);
    }
    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 태풍이 이동한 각(θ)은 얼마인가?\n\n");
        printf("관련 공식은 θ = r * cosθ\n");
        printf("θ: 태풍이 이동한 각, r: 서쪽(x축)방향의 총 이동거리\n\n");
        printf("θ = r * cosθ\n");
        printf("r * cosθ = %5.2lfkm\n", x1);
        printf("    cosθ = %5.2lfkm / r\n", x1);
        printf("    cosθ = %5.2lfkm / %5.2lfkm\n", x1, d);
        printf("    cosθ = %5.2lf\n\n", x1 / d);
        printf("acos(%5.2lf) = %5.2lf°\n", x1 / d, result_acos);
        printf("θ = %5.2lf°\n\n", result_acos);
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("θ = %5.2lf°\n", result_acos);
    }
    if (solution == SHOW)
    {
        r3 = sqrt(pow(x, 2) + pow(y, 2));
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(d) 태풍의 극좌표를 구하여라\n\n");
        printf("r: 태풍이 이동한 총 거리, θ: 태풍이 이동한 각\n\n");
        printf("극좌표 = (r,θ)\n\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("(%5.2lf km , %5.2lf°)\n\n", d, result_acos);
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