#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_19(int solution, int answer)
{
	double t = 4 + rand() % (4 + 1);
	double g = 9.8;
	double v0y = 0;
	double H = 0;
	double Δx = 80 + rand() % (3 + 1);
	double v0x = 0;
	double v = 0;

	printf("\n\n");
	printf("3-19\n");
	printf("공을 비스듬히 던졌더니 %6.2lf s 후에 %6.2lf m 전방에 떨어졌다.\n\n", t, Δx); 
	printf("(a) 공이 올라간 최고 높이는 얼마인가?\n\n");
	printf("(b) 최고점에서의 공의 속도는 얼마인가?\n");

	if (solution == SHOW)
	{
		H = (g / 2) * t * t;
		printf("\n\n\n");
		printf("============================ 풀 이 ============================\n\n");
		printf("(a) 공이 올라간 최고 높이는 얼마인가?\n\n");
		printf("관련 공식은 0 - H = v0y * t + 1/2 * (-g) * t^2  \n");
		printf("H: 최고 높이, v0y: y의 초기 속도, t: 시간, a: 가속도\n\n");
		printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g); 
		printf("0 - H =   v0y * t + 1/2 * (-g) * t^2  \n");
		printf("0 - H = %6.2lf * t + 1/2 * (-g) * t^2\n", v0y); 
		printf("H =  1/2 * %6.2lfm/s^2 * (%6.2lfs)^2\n", g, t);
		printf("  = %6.2lfm\n\n", H);  
	} 
	if (answer == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		printf("H = %6.2lfm\n\n", H);
	}
	if (solution == SHOW)
	{
		v0x = Δx / t;
		v = sqrt((v0x) * (v0x));
		printf("============================ 풀 이 ============================\n\n");
		printf("(b) 최고점에서의 공의 속도는 얼마인가?\n\n");
		printf("관련 공식은 v0x = Δx / t, v = √v0x^2 + v0y^2\n");
		printf("v0x: x의 초기 속도, v0y: y의 초기 속도, Δx: 움직인 거리, t: 시간, v: 속도\n\n");
		printf("v0x = Δx / t\n");
		printf("    = %6.2lfm / %6.2lfs\n", Δx, t);
		printf("    = %6.2lfm/s\n\n", v0x);
		printf("v = √(v0x^2 + v0y^2)\n");
		printf("  = √(%6.2lfm/s)^2 + (%6.2lfm/s)^2\n", v0x, v0y);
		printf("  = %6.2lfm/s\n\n", v);
	}
	if (answer == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		printf("v = %6.2lfm/s\n\n", v);
		printf("===============================================================\n\n");
	}
}

int main(void)
{
	Excersize_3_19(1, 1);
}
