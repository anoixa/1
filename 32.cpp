#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,S,P;
	printf("请输入三边长\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if( a+b<=c || b+c<=a || a+c<=b) 
	{
		printf("不能构成三角形\n");
	}
	else
	{
		P = (a+b+c)/2;
	    S = sqrt(P*(P-a)*(P-b)*(P-c));
	    printf("面积为%.2lf\n",S);
	}
	return 0;
} 
