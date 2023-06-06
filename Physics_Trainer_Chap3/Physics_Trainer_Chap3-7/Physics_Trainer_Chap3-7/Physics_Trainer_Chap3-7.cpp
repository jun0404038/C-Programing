#include<stdio.h>
#define _USE_MATH_DEFINES
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_7(int solution, int answer)
{
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
	printf("어느 벡터의 성분은 x성분은 %6.2f 단위이고 y성분은 %6.2f 단위이다.\n", x, y);
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
		printf("  = √(%6.2lf)^2 + (%6.2lf)^2 = %6.2lf\n\n", x, y, S);
	}

	if (answer == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		printf("벡터의 크기 = %6.2lf\n", S);
	}

	if (solution == SHOW)
	{
		tan1 = y / x;
		θ_rad = atan(tan1); 
		θ = 180 + (θ_rad / radtodeg);
		printf("\n");
		printf("============================ 풀 이 ============================\n\n");
		printf("이 벡터의 방향을 구하라.\n\n");
		printf("관련 공식은 tanθ = Ay / Ax\n");
		printf("Ax: 벡터 A의 x성분, Ay: 벡터 A의 y성분, θ: 벡터의 방향\n\n");
		printf("tanθ  = Ay / Ax \n");
		printf("      = % 6.2lf / % 6.2lf\n", y, x); 
		printf("      = %6.2lf\n\n", tan1);
		printf("θ = %6.2lf°\n\n", θ);
	}

	if (solution == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		printf("벡터의 방향 = %6.2lf°\n\n", θ);
		printf("===============================================================\n\n");

	}
}
int main(void)
{
	//printf("===============================================================\n");

	Excersize_3_7(SHOW_Solution, Answer);
}