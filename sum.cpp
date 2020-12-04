#include<stdio.h>
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	while( i<n+1 )
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
