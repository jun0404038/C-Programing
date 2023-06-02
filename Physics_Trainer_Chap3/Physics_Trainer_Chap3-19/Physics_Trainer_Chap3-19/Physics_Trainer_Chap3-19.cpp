#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_19(int solution, int answer)
{
	double t = 4;
	double v = 80;
	

	printf("\n\n");
	printf("3-19\n");
	printf("공을 비스듬히 던졌더니 %6.2lf s 후에 %6.2lf m 전방에 떨어졌다.\n\n", t, v);
	printf("(a) 공이 올라간 최고 높이는 얼마인가?\n");
	printf("(b) 최고점에서의 공의 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		
		printf("\n\n\n");
		printf("============================ 풀 이 ============================\n\n");
		printf("(a) 공이 올라간 최고 높이는 얼마인가?\n\n");
		printf("관련 공식은 Δx = v0x * t, H = v0x * t - (1/2) * g * t^2\n");
		printf("v0x: , t: 시간, H: 최고높이, g: 중력가속도 \n\n");
		printf("S = √(Ax^2 + Ay^2)\n");
		//printf("  = √(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S);
	}

	if (answer == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		///printf("벡터의 크기 = %6.2lf\n", S);
	}

	if (solution == SHOW)
	{
		
		printf("\n");
		printf("============================ 풀 이 ============================\n\n");
		//printf("어느 벡터의 성분은 x성분은 %6.2lf 단위이고 y성분은 %6.2lf 단위이다.\n", x, y);
		printf("이 벡터의 방향을 구하라.\n\n");
		printf("관련 공식은 tanθ = Ay / Ax\n");
		printf("Ax: 벡터 A의 x성분, Ay: 벡터 A의 y성분\n\n");
		//printf("tanθ  = Ay / Ax = %6.2lf / %6.2lf\n", y, x);
		//printf("      = %6.2lf\n", tan2);
	}

	if (solution == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		//printf("벡터의 방향 = %6.2lf\n\n", tan2);
		printf("===============================================================\n\n");

	}
}
int main(void)
{
	//printf("===============================================================\n");

	Excersize_3_19(SHOW_Solution, Answer);
}