#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x;

	printf("���̸� �Է����ּ���: ");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("30%% �����Դϴ�. \n");
	}
	else
	{
		printf("������ ���� �ʴ� �����Դϴ�. \n");
	}
	return 0;
}