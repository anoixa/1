#include<stdio.h>
int main()
{
	int a,b;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		printf("if/else����ϴ������%d\n",a);
	}
	else
	{
		printf("if/else����ϴ������%d\n",b);
	}
	printf("�������ʽ����ϴ������%d\n",a > b ? a : b);
	return 0;
}
