#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	while(N>1)
	{
		if( N % 2 == 0)
		{
			N=3*N+1;
		}
		else
		{
			N=N/2;
			printf("%d\n",N);
		}
	}
	return 0;
 }
