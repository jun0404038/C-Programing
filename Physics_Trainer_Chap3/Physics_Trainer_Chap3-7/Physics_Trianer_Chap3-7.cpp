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
	printf("��� ������ ������ x������ %6.2f �����̰� y������ %6.2f �����̴�.\n", x, y);
	printf("�� ������ ũ��� ������ ���϶�.\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("============================ Ǯ �� ============================\n\n");
		printf("��� ������ ������ x������ %6.2f �����̰� y������ %6.2f �����̴�.\n", x, y);
		printf("�� ������ ũ��� ������ ���϶�.\n");
		printf("\n");



	}
	
}
int main(void)
{
	printf("===================================================================\n");

	Excersize_3_7(SHOW_Solution, Answer);
}