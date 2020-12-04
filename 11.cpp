#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,c,d,sum = 0;
	scanf("%d%d",&a,&n);
	for(int i =1;i<=n;i++)
	{
		c = pow(a,i);
		sum += c;
	}
	printf("%d\n",sum);
	return 0;
}
