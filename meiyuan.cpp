#include<stdio.h> 
int main()
{
	double x,y;
	printf("请输入美元数量\n");
	scanf("%lf",&x);
	y = x*6.258;
	printf("美元数量%.2lf\n",y);
	return 0;
}
