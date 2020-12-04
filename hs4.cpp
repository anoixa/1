#include<stdio.h>
void test(int a[5],int b[],int* c)
{
	printf("sizeof(a)=%d,sizeof(b)=%d,sizeof(c)=%d\n",sizeof(a),sizeof(b),sizeof(c));
} 
void print(const int*a,int len)
{
	for(int i = 0;i < len;++i)
	{
		if(i < len-1)
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf("%d\n",a[i]);
		}
	}
}
void copy(int* a,const int*b,int len)
{
	for(int i = 0;i <len;++i)
	{
		a[i] = b[i];
	}
}
int main()
{
	int x[5] = {1,2,3,4,5},y[6] = {6,7,8,9,10};
	test(x,x,x);test(y,y,y);
	print(x,3);copy(x,y,3);
	print(x,3);//print((int[5]){12,13,14,15,16},5);
	return 0;
}
