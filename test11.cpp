#include<stdio.h>
int main()
{
	int i, j, n, a;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			n = i * j;
			printf("%d*%d=%d ", j, i, n);
			if( i == j)
			    printf("\n");
		}
	}
}
/*  */
