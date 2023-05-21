#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1

void Excersize_2_22(int solution, int answer)
{
	srand(time(NULL));
	double f = 10;   //속도
	double t = 2 + rand() % (9 + 1) - 3;    //시간
	double g = 9.8;  //중력가속도
	double v0 = 10 + rand() % (9 + 1) - 4;  //초기 속도 
	double V = 29.6 + rand() % (10 + 1) - 5; //나중 속도
	double y0 = 0;   //처음 높이
	double y = 39.6 + rand() % (4 + 1) - 2; //높이



	printf("2-22 \n");
	printf("어떤 높이에서 %6.2lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", v0);
	printf("(a) 공을 던진 후 %6.2f s 후의 속도를 구하라.\n\n", t);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n");

	if (solution == SHOW)
	{
		V = v0 + g * t;
		printf("\n");
		printf("=========================================   풀 이   =========================================\n\n");
		printf("(a) 공을 던진 후 %6.2f s 후의 속도를 구하라.\n\n", t);
		printf("관련 공식은  V = v0 + a * t \n");
		printf("V: 나중속도, v0: 처음속도, a: 가속도, t: 시간.\n\n");
		printf("연직 아래방향이므로 중력가속도(g)와 처음속도(v0)는 음수값을 가지게 됩니다.\n\n");
		printf("V = (%6.2lf m/s) + ( %6.2lf m/s^2) * %6.2lf s\n", -v0, -g, t);
		printf("  = %6.2lf m/s\n\n", -V);

	}

	if (answer == SHOW)
	{

		printf("=========================================   정 답   =========================================\n\n");

		printf("V = %6.2lf m/s\n", -V);


	}


	if (solution == SHOW)
	{
		y = v0 * t + (g / 2 * t * t);
		printf("\n");
		printf("=========================================   풀 이   =========================================\n\n");
		printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");
		printf("관련 공식은  y = y0 + v0 * t + (1/2) * a * t^2\n");
		printf("y: 높이, y0: 처음높이, v0: 처음속도, a: 가속도, t: 시간.\n\n");
		printf("연직 아래방향이므로 중력가속도(g)와 처음속도(v0)는 음수값을 가지게 됩니다.\n\n");
		printf("y = %6.2lf m + ((%6.2lf m/s) * %6.2lf s) + 1/2 * (%6.2lf m/s^2) * (%6.2lf s)^2\n", y0, -v0, t, -g, t); //각 항에 대응되는 값을 대입 한 후 문제 풀이 
		printf("  = %6.2lf m\n\n", -y);

	}

	if (answer == SHOW)
	{

		printf("=========================================   정 답   =========================================\n\n");

		printf("y = %6.2lf m\n\n", -y); //중력가속도 공식으로 변환
		printf("=============================================================================================\n");
		printf("\n\n");
	}
}

int main(void)
{


	printf("========================================================================== \n");
	printf("=========================  Halla University ============================== \n");
	printf("=========================  Future Mobility  ============================== \n");
	printf("=========================  Phsics Trainer   ============================== \n");
	printf("=========================    Chapter 2      ============================== \n");
	printf("========================================================================== \n\n\n");
	Excersize_2_22(Show_Solution, Answer);

}