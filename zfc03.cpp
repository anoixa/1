#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun1()
{
	unsigned int i = 0,j=0;
	char a[100] = "Hello";
	char b[100] = "How do you do";
	const char c[100] = "C and C++";
	printf("a:%s\n",a);
	while(a[i++] = c[j++])
	{
		;
	}
	i = j = 0;
	printf("b:%s\n",b);
	while(b[i++] = c[j++])
	{
		;
	}
	printf("b:%s\n",b);
}

int main()
{
	unsigned int i=0,j=0;
	char a[100] = "hello";
	const char b[100] = "C and C++";
	printf("a:%s\n",a);
	while(a[i])
	{
		++i;
	}
	while(a[i++] = b[j++]);
	printf("a:%s\n",a);
	fun1();
}

