#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x;

	printf("나이를 입력해주세요: ");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("30%% 할인입니다. \n");
	}
	else
	{
		printf("할인이 되지 않는 나이입니다. \n");
	}
	return 0;
}