#include<stdio.h>
int main()
{
	double a,b,c,d;
    printf("请输入长 宽\n");
	scanf("%lf%lf",&a,&b);
	c = (a+b)*2;
	d = a*b;
	printf("周长%lf\n",c);
	printf("面积%lf\n",d);
	return 0;
}
