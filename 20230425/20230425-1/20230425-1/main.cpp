#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int a, i;
	printf("카운터의 초기값을 입력하시오(단위: 초): ");
	scanf("%d", &a);

	for (i = a; i > 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}    