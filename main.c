#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	/* 01
	int a;
	char b;

	a = 10;
	b = 'A';

	printf("a = %d\n", a);
	printf("b = %c\n", b);
	return 0;
	*/

	/* 자가진단 01
	int a;

	a = -100;

	printf("%d\n", a);
	return 0;
	*/

	/*02
	int a, b;

	a = 10;
	b = 20;

	printf("%d %d\n", b, a);
	return 0;
	*/

	/*자가진단 02
	int a, b;

	a = -1;
	b = 100;

	printf(" %d\n %d\n", a, b);
	return 0;
	*/

	/*03
	int a, b;

	a = 10, b = 20;
	printf("%d + %d = %d\n",a,b ,a + b);

	a = 30, b = 40;
	printf("%d + %d = %d\n",a,b ,a + b);
	return 0;
	*/

	/*자가진단 03
	int a, b;

	a = 55, b = 10;
	printf("%d - %d = %d\n", a, b, a - b);

	a = 2008, b = 1999;
	printf("%d - %d = %d\n",a, b, a - b);
	return 0;
	*/

	/*04  *****************DOUBLE*******************
	int r = 5;
	double pi = 3.14;

	printf("원주 = %d * 2 * %lf = %lf\n", r, pi, r * pi * 2);
	printf("넓이 = %d * %d * %lf = %lf\n", r, r, pi, r * r * pi);
	return 0;
	*/

	/*자가진단 04
		int a;
	double b;

	a = 49;
	b = 0.2683;

	printf("%d * %lf = %lf\n", a, b, a * b);
	return 0;
	*/

	/*05
	double x, y;
	x = 1.234, y = 10.3459;

	printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
	printf("x = %7.4lf\n", x);
	printf("y = %7.4lf\n\n\n", y);
	printf("소수 2자리까지 출력(반올림)\n");
	printf("x = %.2lf\n", x);
	printf("y = %.2lf\n", y);
	return 0;
	*/

	/*자가진단 05
	double a, b;
	a = 91.44, b = 2.54;

	printf("2.1yd = %.1lfcm\n", a * 2.1);
	printf("10.5in = %.1lfcm\n", b * 10.5);
	return 0;
	*/

	/*06
	int age;

	printf("당신의 나이는 몇 살입니까?");
	scanf(" %d", &age);
	printf("당신의 나이는 %d살이군요.\n", age);
	return 0;
	*/

	/*자가진단 06
	int h;
	printf("height = ");
	scanf("%d", &h);
	printf("Your height is %dcm\n", h);
	return 0;
	*/

	/*07
	int a, b;

	printf("두 수를 입력하시오.");
	scanf("%d %d", &a, &b);
	printf("%d + % d = % d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
	return 0;
	*/

	/*자가진단 07
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	return 0;
	*/

	/*08
	int h;
	double w;
	char name;

	printf("키를 입력하세요.");
	scanf("%d", &h);

	printf("몸무게를 입력하세요.");
	scanf("%lf", &w);

	printf("이름을 입력하세요.");
	scanf(" %c", &name);

	printf("키 = %d\n", h);
	printf("몸무게 = %lf\n", w);
	printf("이름 = %c\n", name);

	return 0;
	*/

	/*자가진단 08
	char a;
	double b, c;
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf(" %c", &a);

	printf("\n%.2lf\n%.2lf\n%c\n", b, c, a);
	return 0;
	*/

	/*09
	float a;
	double b;

	printf("두 개의 실수를 입력하시오.\n");
	scanf("%f\n%lf", &a, &b);
	printf("\nx = %.2f\ny = %.2lf\n", a, b);
	return 0;
	*/

	/*자가진단 09
	float a, b;
	double c;

	scanf("%f\n%f\n%lf", &a, &b, &c);
	printf("\n%4.3f\n%4.3f\n%4.3lf\n", a, b, c);
	return 0;
	*/
}