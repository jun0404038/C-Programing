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
	double t = 4;
	double x = 80;

	printf("\n\n");
	printf("3-19\n");
	printf("공을 비스듬히 던졌더니 %6.2lf s 후에 %6.2lf m 전방에 떨어졌다.\n\n", t, x);
	printf("(a) 공이 올라간 최고 높이는 얼마인가?\n");
	printf("(b) 최고점에서의 공의 속도는 얼마인가?\n");

	if (solution == SHOW)
	{
		
		printf("\n\n\n");
		printf("============================ 풀 이 ============================\n\n");
		printf("(a) 공이 올라간 최고 높이는 얼마인가?\n");
		printf("관련 공식은 Δx = v0x * t, -H = v0y * t + 1/2 * (-g) * t^2  \n");
		printf("Ax: 벡터 A의 x성분, Ay: 벡터 A의 y성분, S: 벡터의 크기\n\n");
		printf("S = √(Ax^2 + Ay^2)\n");
		printf("  = √(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S);
	}
}