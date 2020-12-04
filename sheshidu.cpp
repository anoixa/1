#include<stdio.h> 
int main()
{
	double x,y;
	printf("请输入华氏度\n");
	scanf("%lf",&x);
	y = (x-32)*5/9;
	printf("摄氏度%.1lf\n",y);
	return 0;
}
