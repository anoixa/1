#include<stdio.h>
int a = 0;
void f();
int main()
{
	printf("a=%d\n",a);
	int a = 1;//�ֲ�a 
	printf("a=%d\n",a);
	{
		int a = 2;
		printf("a=%d\n",a);
	}
	f();  f();
	return 0;
}
void f()
{
	int b =10;
	static int c = 100;
	printf("��ʼa=%d,b=%d,c=%d\n",a,b,c);
	++a,++b,++c;
	printf("����a=%d,b=%d,c=%d\n",a,b,c);
}
