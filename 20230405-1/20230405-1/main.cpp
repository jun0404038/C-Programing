#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int height, ft;
	double inch;

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf("%d", &height);

	ft = (int)(height / 2.54 / 12);
	inch = (height - ft * 2.54 * 12) / 2.54;

	printf("%dcm�� %d��Ʈ %.2f��ġ�Դϴ�.\n", height, ft, inch);

	return 0;
}