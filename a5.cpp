#include<stdio.h>
int main()
{
	double s = 1,x;
	int n,i;
	scanf("%lf%d",&x,&n);
	for(i = 0;i<n;i++)
	{
        s = s * x;
	}
	printf("%.6lf\n",s);
	return 0;
}
