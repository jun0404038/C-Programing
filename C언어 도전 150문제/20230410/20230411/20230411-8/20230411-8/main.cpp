#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;

    printf("���� ���Ա��� �������ּ���: ");
    scanf("%d", &x);

    if (x >= 500)
    {
        printf("������� ���Խ��ϴ�.\n %d���� ��ȯ�Ǿ����ϴ�.\n", x - 500);

    }
    else
    {
        printf("�ݾ��� �����մϴ�.");
    }

    
    return 0;
}