#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x, y;
	x = 20;

	printf("y값을 입력하세요: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x의 값이 y의 값보다 큽니다.\n");
	}
	else (x < y);
	{
		printf("x의 값이 y의 값보다 작습니다.\n");
	}
}