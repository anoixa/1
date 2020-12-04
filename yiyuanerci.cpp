#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	printf("请输入abc\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if( b*b-2*a*c >= 0 )
	{
	    printf("根1为%.1lf\n",(-b+sqrt(b*b-2*a*c))/2*a);
	    printf("根2为%.1lf\n",(-b-sqrt(b*b-2*a*c))/2*a);
    }
	else
	{
	    printf("无实根\n");
    }
	return 0;
}

