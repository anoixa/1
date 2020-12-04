#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		printf("if/else输出较大的数是%d\n",a);
	}
	else
	{
		printf("if/else输出较大的数是%d\n",b);
	}
	printf("条件表达式输出较大的数是%d\n",a > b ? a : b);
	return 0;
}
