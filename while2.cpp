#include<stdio.h>
int main()
{
	int n,i = 0;
	double sum = 0.0;
	scanf("%d",&n);
	while( i<n )
	{
		if( i%2 )
		    sum -= 1.0 /(2*i+1);
		else
		{
		   sum += 1.0 /(2*i + 1);
		   ++i;
	    }
	}
	printf("¦Ð=%f\n",4*sum);
	return 0;
}
