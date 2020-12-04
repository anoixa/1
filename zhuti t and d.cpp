#include<stdio.h>
int main()
{
	double a,b,c;
	printf("长宽高\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("体积为%.1lf\n",a*b*c);
	printf("底面积%.1lf\n",a*b);
	return 0;
}
