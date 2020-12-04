#include<stdio.h>
int main()
{
	double a;
	printf("grade\n");
	scanf("%lf",&a);
	if(a >= 60)
	{
		printf("congratulation\n");
	}
	else
	{
		printf("failed\n");
	}
	return 0;
}
