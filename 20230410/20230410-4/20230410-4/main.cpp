#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x, y;
	x = 20;

	printf("y���� �Է��ϼ���: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x�� ���� y�� ������ Ů�ϴ�.\n");
	}
	else (x < y);
	{
		printf("x�� ���� y�� ������ �۽��ϴ�.\n");
	}
}