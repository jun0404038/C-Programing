#include <stdio.h>

int main(void)
{
	int i, j, k;
	int a[3][3] = { {1,2,3},
					{4,5,6},
					{7,8,9} };
	int b[3][3] = { {9,8,7}, 
		            {6,5,4}, 
		            {3,2,1} };
	int c[3][3] = {0};
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++) 
			{

				c[i][j] += a[i][k] * b[k][j];
	
			}
		}
	}
	
    printf("================================================================================================\n");
	

	int D;

	printf("determinant\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("c[%d][%d] = %d\t", i, j, c[i][j]);
		}printf("\n\n");
	}
	printf("================================================================================================\n");
}