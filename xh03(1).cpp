#include<stdio.h>
int main()
{
	int a,b,i;
	double d,e,c;
	scanf("%d%d%lf",&a,&b,&c);
	while( i < b)
	{
		d = (a*(1+c)-a);
		a = a + d;
		e =  e + d;
		i++;
	}
	printf("%.2lf",e);
	return 0;
}
