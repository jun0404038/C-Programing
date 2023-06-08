#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_4_26(int solution, int answer)
{
	srand(time(NULL));
	double m = 5 + rand() % (3+1);
	double a = 3 + rand() % (2+1);
	double g = 9.8;
	double mg = 0;
	double T = 0;

	printf("\n\n");
	printf("4-26\n");
	printf("질량이 %6.2lfkg인 물체를 줄에 매달아 끌어올리고 있다.  \n", m);
	printf("물체가 가속도 %6.2lfm/s^2으로 위쪽으로 올라가고 있다면 \n", a);
	printf("줄이 물체에 작용하는 힘은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		T = m * a + m * g;
		printf("============================ 풀 이 ============================\n\n");
		printf("이 물체에 작용하는 힘을 구하여라\n\n");
		printf("관련 공식은 ∑F = T - m * g = m * a\n");
		printf("F: 힘, T: 장력, m: 질량, g: 중력가속도, a: 가속도\n\n");
		printf("∑F = T - m * g = m * a\n\n");
		printf("T - m * g = m * a\n");
		printf("T = m * (a + g)\n");
		printf("  = %6.2lfkg * (%6.2lfm/s^2 + %6.2lfm/s^2)\n",m,a,g);
		printf("  = %6.2lfN\n\n", T);
	}
	if (answer == SHOW)
	{
		printf("============================ 정 답 ============================\n\n");
		printf("∑F = %6.2lfN\n\n", T);
		printf("===============================================================\n\n");
	}
}

int main(void)
{
	Excersize_4_26(1, 1);
}