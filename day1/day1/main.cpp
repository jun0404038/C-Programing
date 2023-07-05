#include <stdio.h>
#include <string.h>
#define LEN_INPUT 1000001

//1
/*
int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    printf("%s", s1);
    return 0;
}
//2
int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\nb = %d", a, b);
    return 0;
}
//3

#define LEN_INPUT 11
#define MAX_REPEAT 100

int main(void) {
    char s1[LEN_INPUT];
    int a;

    scanf("%s%d", s1, &a);

    int len = strlen(s1);
    if (len > 0 && a > 0 && a <= MAX_REPEAT) {
        for (int i = 0; i < a; i++) {
            printf("%s", s1);
        }
        printf("\n");
    }

    return 0;
}
//4

#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] >= 'A' && s1[i] <= 'Z') { 
            putchar(s1[i] + 32);  
        }
        else if (s1[i] >= 'a' && s1[i] <= 'z') {
            putchar(s1[i] - 32);  
        }
        else {
            putchar(s1[i]);  
        }
        i++;
    }

    return 0;
} 
//5
int main(void) {
    printf("!@#$%^&*(\'" < > ? : ; ");
        return 0;
} */