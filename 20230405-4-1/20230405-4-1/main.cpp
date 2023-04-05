#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float AC, AE, BC, DE;

	printf("AC와 AE, BC를 입력해 주세요: ");
	scanf("%f %f %f", &AC, &AE, &BC);

	DE = AE * BC / AC;

	printf("DE는 %f입니다.\n", DE);

	return 0;
}