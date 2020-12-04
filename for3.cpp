#include<stdio.h>
int main() 
{
	double s=0;
	int n,t = 0;
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&n);
		if( n%2 == 1 )
		{
			s += n;
			t++;
		}
	}
	printf("%.2lf\n",s/t);
	return 0;
}
