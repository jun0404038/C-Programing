#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int a, i;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��): ");
	scanf("%d", &a);

	for (i = a; i > 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}    