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

	/* �ڰ����� 01
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

	/*�ڰ����� 02
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

	/*�ڰ����� 03
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

	printf("���� = %d * 2 * %lf = %lf\n", r, pi, r * pi * 2);
	printf("���� = %d * %d * %lf = %lf\n", r, r, pi, r * r * pi);
	return 0;
	*/

	/*�ڰ����� 04
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

	printf("��ü 7�ڸ��� ���߰� �Ҽ� 4�ڸ����� ���\n");
	printf("x = %7.4lf\n", x);
	printf("y = %7.4lf\n\n\n", y);
	printf("�Ҽ� 2�ڸ����� ���(�ݿø�)\n");
	printf("x = %.2lf\n", x);
	printf("y = %.2lf\n", y);
	return 0;
	*/

	/*�ڰ����� 05
	double a, b;
	a = 91.44, b = 2.54;

	printf("2.1yd = %.1lfcm\n", a * 2.1);
	printf("10.5in = %.1lfcm\n", b * 10.5);
	return 0;
	*/

	/*06
	int age;

	printf("����� ���̴� �� ���Դϱ�?");
	scanf(" %d", &age);
	printf("����� ���̴� %d���̱���.\n", age);
	return 0;
	*/

	/*�ڰ����� 06
	int h;
	printf("height = ");
	scanf("%d", &h);
	printf("Your height is %dcm\n", h);
	return 0;
	*/

	/*07
	int a, b;

	printf("�� ���� �Է��Ͻÿ�.");
	scanf("%d %d", &a, &b);
	printf("%d + % d = % d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
	return 0;
	*/

	/*�ڰ����� 07
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

	printf("Ű�� �Է��ϼ���.");
	scanf("%d", &h);

	printf("�����Ը� �Է��ϼ���.");
	scanf("%lf", &w);

	printf("�̸��� �Է��ϼ���.");
	scanf(" %c", &name);

	printf("Ű = %d\n", h);
	printf("������ = %lf\n", w);
	printf("�̸� = %c\n", name);

	return 0;
	*/

	/*�ڰ����� 08
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

	printf("�� ���� �Ǽ��� �Է��Ͻÿ�.\n");
	scanf("%f\n%lf", &a, &b);
	printf("\nx = %.2f\ny = %.2lf\n", a, b);
	return 0;
	*/

	/*�ڰ����� 09
	float a, b;
	double c;

	scanf("%f\n%f\n%lf", &a, &b, &c);
	printf("\n%4.3f\n%4.3f\n%4.3lf\n", a, b, c);
	return 0;
	*/
}