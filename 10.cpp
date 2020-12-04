#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for(int i = 1;i<a;i++)
	{
		b += a%10;
		a /= 10;
	}
	if(b/7 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
