#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int sum = 0;
	int i;

	for (i > 1; i <= 100; i++)
	{
		if (i%3 == 0)
			sum += i;
 	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d 입니다.\n ", sum);
	return 0;
}