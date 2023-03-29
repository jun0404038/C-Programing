#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define SEC_PER_MINUTE 60

int main(void)
{
	/*
	int x, y, result;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d+%d = %d\n", x, y, result);

	result = x - y;
	printf("%d-%d = %d\n", x, y, result);

	result = x * y;
	printf("%d*%d = %d\n", x, y, result);

	result = x / y;
	printf("%d/%d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);
	*/
	/*
	int input, minute, second;

	printf("초를 입력하시오: ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
	*/
	
	int money, change;
	int price, c5000, c1000, c500, c100, c10;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);

	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &money);
	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;
	
	c100 = change / 100;
	change = change % 100;

	c10 = change / 10;
	change = change % 10;

	printf("거스름돈은 다음과 같습니다.\n천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);
	printf("십원 동전 : % d개\n", c10);
    return 0;
}
