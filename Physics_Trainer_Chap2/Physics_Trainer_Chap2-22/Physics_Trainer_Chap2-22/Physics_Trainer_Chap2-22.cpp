#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_22(int solution, int answer)
{
	double f = 10;   //속도
	double t = 2;    //시간
	double g = 9.8;  //중력가속도
	double V0 = 10;  //초기 속도
	double V = 29.6; //나중 속도
	double y0 = 0;   //처음 높이
	double y = 39.6; //높이




	printf("대학 물리 2-22 \n");
	printf("어떤 높이에서 %.1lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", f);
	printf("(a) 공을 던진 후 %.1f s 후의 속도를 구하라.\n", t);

	if (solution == SHOW)
	{
		printf("\n");
		printf("***************************   풀 이   ***************************\n\n");
		printf("이 문제에 관련된 공식은  V = V0 + a * t입니다. \n");
		printf("V는 나중속도, V0는 처음속도, a는 가속도, t는 시간입니다.\n");
		printf("자유낙하 운동이므로 가속도(a)는 중력가속도(g)로 변환됩니다.\n");
		printf("연직 아래 방향이므로 중력가속도(g)와 처음속도(V0)은 음수값을 갖게 됩니다.\n");
		printf("V0는 처음 속도이므로 %.1lf m/s 입니다.\n", -V0);
		printf("중력가속도는 %.1lf m/s^ 2입니다.\n", -g);
		printf("시간은 %.0lf s 입니다.\n", t);
		printf("관련공식에 중력가속도를 대입하면 V = V0 + g * t으로 식 변환이 됩니다.\n");
		printf("이후에 식을 정리하여 나중속도값을 구해주면 됩니다.\n");
		printf("식은 V = %.1lf m + ( %.1lf m/s^2) * %.0lf s가 됩니다.\n\n", -V0, -g, t);
		printf("*****************************************************************\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{

		printf("***************************   정 답   ***************************\n\n");
		V = V0 + (g * t);
		printf("풀이과정에서 정리된 공식을 계산하면\n\n");
		printf("V = %.1lf m + ( %.1lf m/s^2) * %.0lf s = %.1lf m + (%.1lf m/s^2) * %.0lf s = %.1lf m/s 값이 나옵니다. \n\n", -V0, -g, t, -V0, -g, t, -V);
		printf("*****************************************************************\n");
		printf("\n\n");
	}
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("***************************   풀 이   ***************************\n\n");
		printf("이 문제에 관련된 공식은  y = y0 + V0 * t + 1/2 * a * t^2 입니다. \n");
		printf("y는 높이, y0는 처음높이, V0는 처음속도, a는 가속도,  t는 시간입니다.\n");
		printf("자유낙하 운동이므로 가속도(a)는 중력가속도(g)로 변환됩니다.\n");
		printf("연직 아래 방향이므로 중력가속도(g)와 처음속도(V0)은 음수값을 갖게 됩니다.\n");
		printf("중력가속도는 %.1lf m/s^2입니다.\n", -g);
		printf("시간은 %.0lf s 입니다.\n", t);
		printf("처음높이는 %.0lf m 입니다.\n", y0);
		printf("V0는 처음 속도이므로 %.1lf m/s 입니다.\n", -V0);
		printf("관련공식에 중력가속도를 대입하면 y = y0 + V0 * t + 1/2 * g * t^2으로 식 변환이 됩니다.\n");
		printf("변환된 식에 각각의 항에 대응하는 값을 대입해주면\n");
		printf("y = % .0lf + (% .1lf m / s * %.0lf s) + 1 / 2 * (% .1lf m / s ^ 2) * (% .0lf ^ 2 s) 가 됩니다.\n", y0, -V0, t, -g, t);
		printf("이후에 식을 정리하여 높이값을 구해주면 됩니다.\n\n");
		printf("*****************************************************************\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{

		printf("***************************   정 답   ***************************\n\n");
		y = V0 * t + (g * t);
		printf("풀이과정에서 정리된 공식인\n\n");
		printf("y = %.0lf + (%.1lf m/s * %.0lf s) + 1/2 * (%.1lf m/s^2) * (%.0lf^2 s) 식을 계산하면\n\n", y0, -V0, t, -g, t);
		printf("%.1lf m/s * %.0lf s + 1/2 * (%.1lf m/s^2) * (%.0lf^2 s) = %.1lf m 값이 나옵니다. \n\n", -V0, t, -g, t, -y);
		printf("*****************************************************************\n\n\n");
		printf("이상 한라대학교 미래모빌리티공학과 1학년 서형준 이었습니다 감사합니다.\n\n");
		printf("\n\n");
	}
}

int main(void)
{

	Excersize_2_22(Show_Solution, Answer);

}