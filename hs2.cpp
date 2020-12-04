#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
	int t;
	while(b)
	{
		t = a;
		a = b;
		b = t % b;
		return abs(a);
	}
}
int main()
{
	printf("%d\n",gcd(45,18));
	printf("%d\n",gcd(88,1023));
	return 0;
}
