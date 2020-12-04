#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	int i;
	double sum;
	i = m;
    while( i <= n )
    {
    	sum += 1.0/(double)i;
    	i++;
	}
	printf("%.10lf",sum);
	return 0;
}
