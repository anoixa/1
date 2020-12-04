#include<stdio.h>
int main()
{
	double m,mo;
	char find;
	scanf("%c%lf",&find,&m);
	if( find = 'C' )
	{
		mo = m*0.50;
		printf("%.2lf",mo);
	}
	else if( find = 'T')
	{
		mo = m*1.00;
		printf("%.2lf",mo);
	}
	else if(find = 'B' )
	{
		mo = m*1.50;
		printf("%.2lf",mo);
	}
	return 0;
}
