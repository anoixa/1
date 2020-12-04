#include<stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	if( a <= 0)
	{
		printf("%g\n",-a);
	}
	else
	{
		printf("%g\n",a);
	}
	return 0;
}
