#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if(a <= 3)
	{
		b=10;
		printf("���Ϊ%d\n",b);
	}
	else
	{
		c=10+(a-3)*2;
		printf("���Ϊ%d\n",c);
	}
	return 0;
} 
