#include<stdio.h>
	//  2023/05/17

	int get_integer(void)
	{
		int n;

		do {
			printf("양수를 입력하시오: ");
			scanf_s("%d", &n);
		} while (n <= 0);
			return n;
			
	}

	int is_prime(int n)
	{
		int i;

		for (i = 2;i < n;i++) {
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
	
	int main(void) 
	{
		int n;
		n = get_integer();

		for (int i = 2;i <= n;i++)
		{
			if (is_prime(i) == 1)
				printf("%d,", i);
		}
		return 0;	
}
