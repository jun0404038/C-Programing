#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	float radius;
	float area;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("���� ����: %f\n", area);

	return 0;
	*/
	/*
	double num1, num2, num3;
	double sum, avg;

	printf("3���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("�հ�=%.2lf\n", sum);
	printf("���=%.2lf\n", avg);

	return 0;
     */

	double w, h, area, perimeter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %lf\n", area);
	scanf("%lf",  area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);
	scanf("%lf", perimeter);
	return 0;

}