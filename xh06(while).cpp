#include<stdio.h>
int main()
{
	double a,ans=0.0;
	int i = 1;
	scanf("%lf",&a);
	while( i<= a)
	{
		if( a > 0 )
		{
			ans += 1/(double)i;
			i = i + 2;
		}
	}
	printf("%.10lf",ans);
	return 0;
 } 
