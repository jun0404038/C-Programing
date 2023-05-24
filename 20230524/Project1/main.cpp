#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<math.h>

/*  //1번 코인 토스
int coin_toss(void);
int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
	{
		if (coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d\n", tails);
	return 0;
}
int coin_toss(void)
{
	int head = rand() % 2;
	return head;
} */

//2번 자동차 문제 (도전문제 완료)
/*
void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}
int main(void)
{
	int i;
	int car1_dist = 0, car2_dist = 0, car3_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 20; i++)
	{
		system("cls");
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		car3_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		disp_car(3, car3_dist);
		Sleep(1000); 
	}
	return 0;
} */
//3번 시간 맞추기 게임
/*
int main(void)
{
	time_t start, end;
	start = time(NULL);
	printf("10초가 되면 엔터키를 누르세요\n");
	while (1) {
		if (getchar())
			break;
	}
	printf("종료되었습니다.\n");
	end = time(NULL);
	printf("경과된 시간은 %1d초 입니다. \n", end - start);
	return 0;
} */
//4번 공학용 계산기 프로그램 작성

int menu(void)
{
	int n;
	printf("1.팩토리얼\n");
	printf("2.싸인\n");
	printf("3.로그(base 10)\n");
	printf("4.제곱근\n");
	printf("5.순열(nPr)\n");
	printf("6.조합(nCr)\n");
	printf("7.종료\n");
	printf("선택해주세요: ");
	scanf_s("%d", &n);
	return n;
}

void factorial()
{
	int i;
	long long n, result = 1; i;
	printf("정수를 입력하시오: ");
	scanf_s("%lld", &n);
	for (i = 1; i <= n; i++)
		result = result * i;
	printf("결과 - %lld\n\n", result);
}
void sine()
{
	double a, result;
	printf("각도를 입력하시오: ");
	scanf_s("%lf", &a);
	result = sin(a);
	printf("결과 = %lf\n\n", result);
}

void logBase10()
{
	double a, result;
	printf("실수값을 입력하시오: ");
	scanf_s("%lf", &a);
	if (a <= 0.0)
		printf("오류\n");
	else {
		result = log10(a);
		printf("결과 = %lf\n\n", result);
	}
}

int main(void)
{
	while (1) {
		switch (menu()) {
		case 1:
				factorial();
				break;
			case 2:
					sine();
					break;
				case 3:
						logBase10();
						break;
					case 7:
							printf("종료합니다. \n");
							return 0;
						default:
							printf("잘못된 선택입니다.\n");
							break;
		}
	}
}