#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float AC, AE, BC, DE;

	printf("AC�� AE, BC�� �Է��� �ּ���: ");
	scanf("%f %f %f", &AC, &AE, &BC);

	DE = AE * BC / AC;

	printf("DE�� %f�Դϴ�.\n", DE);

	return 0;
}