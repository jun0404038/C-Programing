#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	float radius;
	float area;

	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적: %f\n", area);

	return 0;
	*/
	/*
	double num1, num2, num3;
	double sum, avg;

	printf("3개의 실수를 입력하시오: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("합계=%.2lf\n", sum);
	printf("평균=%.2lf\n", avg);

	return 0;
     */

	double w, h, area, perimeter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	scanf("%lf",  area);
	printf("사각형의 둘레: %lf\n", perimeter);
	scanf("%lf", perimeter);
	return 0;

}