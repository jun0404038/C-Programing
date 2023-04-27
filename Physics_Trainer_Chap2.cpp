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
	printf("어떤 높이에서 %.1lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n\n", fast);
	printf("(a) 공을 던진 후 %.1f s 후의 속도를 구하라.\n\n", t);

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련 공식은  V = V0 + a * t입니다. \n");
		printf("V는 나중속도, V0는 처음속도, a는 가속도, t는 시간입니다.\n");
		printf("자유낙하 운동이므로 가속도(a)는 중력가속도(g)로 변환됩니다.\n");
		printf("연직 아래 방향이므로 중력가속도(g)와 처음속도(V0)은 음수값을 갖게 됩니다.\n");
		printf("중력가속도는 -%1lf m/s^ 2입니다.\n", g);
		printf("시간은 %1lf s 입니다.\n", t);
		printf("관련공식에 중력가속도를 대입하여 V = V0 + g * t으로 식 변환이 됩니다.\n");
		printf("V0는 처음 속도이므로 -%1lf m/s이다.\n", V0);
		printf("이후에 식을 정리하여 나중속도값을 구해주면 된다.\n");
		printf("식은 V = -%1lf m + (- %1lf m/s^2) * %1lf s가 됩니다.\n", V0, g, t);
		printf("=================================================================\n");
		printf("\n\n");
	}
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");
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