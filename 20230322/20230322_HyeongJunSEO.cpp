// ���� ���� ���������� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARRINGS
#include<stdio.h>

int main(void)
{
	int x;    // ù ��° ������ ������ ����
	int y;    // �� ��° ������ ������ ����
	int sum, diff, mul, div;  //�� ���� ���� ������ ����� �����ϴ� ����

	printf("x =");
	scanf("%d", &x);
	printf("y =");
	scanf("%d", &y);
	/*
	x = 20;  //���� x�� 20�� ����
	y = 10;  //���� y�� 10�� ����
	*/

	sum = x + y;    // ���� sum�� (x+y)�� ����� ����
	diff = x - y;   // ���� diff�� (x-y)�� ����� ����
	mul = x * y;    // ���� mul�� (x*y)�� ����� ����
	div = x / y;    // ���� div�� (x/y)�� ����� ����
	 
}