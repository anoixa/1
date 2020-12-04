#include<stdio.h>
int main()
{
	int x = 1;
	int y = 3;
	int z = x+y;
	printf("%d-%d-%d\n",x,y,z);
	{
		int q = z;
		int w = y;
		int e = q*w;
		printf("%d\n",e);
		getchar();
		return 0;
	}
}

