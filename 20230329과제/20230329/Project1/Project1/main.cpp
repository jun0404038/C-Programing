#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define SEC_PER_MINUTE 60

int main(void)
{
	/*
	int x, y, result;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d+%d = %d\n", x, y, result);

	result = x - y;
	printf("%d-%d = %d\n", x, y, result);

	result = x * y;
	printf("%d*%d = %d\n", x, y, result);

	result = x / y;
	printf("%d/%d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);
	*/
	/*
	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, minute, second);
	*/
	
	int money, change;
	int price, c5000, c1000, c500, c100, c10;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);
	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;
	
	c100 = change / 100;
	change = change % 100;

	c10 = change / 10;
	change = change % 10;

	printf("�Ž������� ������ �����ϴ�.\nõ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
	printf("�ʿ� ���� : % d��\n", c10);
    return 0;
}
