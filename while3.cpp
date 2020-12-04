#include<stdio.h>
int main()
{
	int a,i,sum;
	i = 1; sum = 0;
	scanf("%d",&a);
	while( i<=a/2 );
	{
		if( a%i ==0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
