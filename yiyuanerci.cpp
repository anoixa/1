#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	printf("������abc\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if( b*b-2*a*c >= 0 )
	{
	    printf("��1Ϊ%.1lf\n",(-b+sqrt(b*b-2*a*c))/2*a);
	    printf("��2Ϊ%.1lf\n",(-b-sqrt(b*b-2*a*c))/2*a);
    }
	else
	{
	    printf("��ʵ��\n");
    }
	return 0;
}

