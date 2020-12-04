#include<stdio.h>
int main()
{
	int m,n;
	double sum=0.0;
	scanf("%d%d",&m,&n);
	for(int i = m;i<=n;i++)
	{
	    sum += 1.0/(double)i;
	}
	printf("%.10lf",sum);
	return 0;
}
