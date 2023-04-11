#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;

    printf("돈을 투입구에 투입해주세요: ");
    scanf("%d", &x);

    if (x >= 500)
    {
        printf("음료수가 나왔습니다.\n %d원이 반환되었습니다.\n", x - 500);

    }
    else
    {
        printf("금액이 부족합니다.");
    }

    
    return 0;
}