#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int t, day; //t=temperature, d=day

	printf("일최고체감온도: ");
	scanf("%d", &t);

	printf("온도가 지속된 날짜: ");
	scanf("%d", &day);

	if (35 <= t && 2 <= day)
	{
		printf("폭염경보 입니다.외출을 삼가하여주시기 바랍니다.\n"); 
	}
	else if (33 <= t && 2 <= day)
	{
		printf("폭염주의보 입니다. 주의해주시길 바랍니다\n");
	}
	else
	{
		printf("정상 기온 입니다.\n");
	}
	return 0;
}