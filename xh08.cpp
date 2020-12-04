#include<stdio.h>
int main()
{
	double a,c,d;
	int b;
	scanf("%lf%d",&a,&b);
	d = a;
	for(int i = 1;i<b;i++)
	{
        c = a*d;
        a = c;
	}
	printf("%.6lf\n",c);
	return 0;
}
