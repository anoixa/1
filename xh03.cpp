#include<stdio.h>
int main()
{
	int a,b;
	double d,e,c;
	scanf("%d%d%lf",&a,&b,&c);
	for(int i = 0;i<b;i++)
	{
		d = (a*(1+c)-a);
		a = a + d;
		e =  e + d;
	}
	printf("%.2lf",e);
	return 0;
}
