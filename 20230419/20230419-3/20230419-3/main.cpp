#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

	int x, y, answer, i; 
	char op;
	srand(time(NULL));

	x = rand() % 9 + 1;
	y = rand() % 9 + 1;

	switch (rand() % 5) {
		for (i = 0; i < 10; i++) {
	case 0:
		op = '+';
		printf("%d + %d = ", x, y, x + y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		break;

	case 1:
		op = '-';
		printf("%d - %d = ", x, y, x - y);
		scanf("%d", &answer);
		if (x - y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		break;

	case 2:
		op = '*';
		printf("%d * %d = ", x, y, x * y);
		scanf("%d", &answer);
		if (x * y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		break;

	case 3:
		op = '/';
		printf("%d / %d = ", x, y, x / y);
		scanf("%d", &answer);
		if (x / y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		break;

	case 4:
		op = '%';
		printf("%d %% %d = ", x, y, x % y);
		scanf("%d", &answer);
		if (x % y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		break;
		}


			/*for (i = 0; i < 9; i++) {
				x = rand() % 10;
				y = rand() % 10;
				printf("%d + %d = ", x, y);
				scanf("%d", &answer);
				if (x + y == answer)
					printf("�¾ҽ��ϴ�.\n");
				else
					printf("Ʋ�Ƚ��ϴ�.\n");
			}
			for (i = 0; i < 9; i++) {
				x = rand() % 10;
				y = rand() % 10;
				printf("%d + %d = ", x, y);
				scanf("%d", &answer);
				if (x + y == answer)
					printf("�¾ҽ��ϴ�.\n");
				else
					printf("Ʋ�Ƚ��ϴ�.\n");
			}*/
}

	//return 0;
}