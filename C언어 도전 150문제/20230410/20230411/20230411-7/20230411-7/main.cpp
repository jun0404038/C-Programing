#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int t, day; //t=temperature, d=day

	printf("���ְ�ü���µ�: ");
	scanf("%d", &t);

	printf("�µ��� ���ӵ� ��¥: ");
	scanf("%d", &day);

	if (35 <= t && 2 <= day)
	{
		printf("�����溸 �Դϴ�.������ �ﰡ�Ͽ��ֽñ� �ٶ��ϴ�.\n"); 
	}
	else if (33 <= t && 2 <= day)
	{
		printf("�������Ǻ� �Դϴ�. �������ֽñ� �ٶ��ϴ�\n");
	}
	else
	{
		printf("���� ��� �Դϴ�.\n");
	}
	return 0;
}