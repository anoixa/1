#include<stdio.h>
int main()
{
	double ans=0.0;
	int a;
	scanf("%lf",&a);
	for(int i = 1;i<=a;i = i + 2)
	{
		if( a % 2 != 0)
		{
			ans += 1/(double)i;
		}
	}
	printf("%.10lf",ans);
	return 0;
 } 
