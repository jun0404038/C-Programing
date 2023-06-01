#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SHOW 1
#define NOT_SHOW 0
#define SHOW_Solution 1
#define Answer 1

void Excersize_3_7(int solution, int answer)
{
	double x = -25;
	double y = 40;
	

    printf("\n\n");
    printf("3-7\n");
	printf("어느 벡터의 성분은 x성분은 %6.2f 단위이고 y성분은 %6.2f 단위이다.\n", x, y);
	printf("이 벡터의 크기와 방향을 구하라.\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("============================ 풀 이 ============================\n\n");
		printf("어느 벡터의 성분은 x성분은 %6.2f 단위이고 y성분은 %6.2f 단위이다.\n", x, y);
		printf("이 벡터의 크기와 방향을 구하라.\n");
		printf("\n");



	}
	
}
int main(void)
{
	printf("===================================================================\n");

	Excersize_3_7(SHOW_Solution, Answer);
}