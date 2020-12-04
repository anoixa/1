#include<stdio.h>
int main()
{
	int a;
	double b = 0.0;
	scanf("%d",&a);
	for(int i = 1;i<=a;i++)
	{
		if( i % 2 == 1 )
		{
			b += 1.0/(3*(double)i-2);
		}
		else
		{
			b -= 1.0/(3*(double)i-2);
		}
	}
	printf("%.10lf\n",b);
	return 0;
}
