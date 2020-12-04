#include<stdio.h>
int fibonacci(int n)
{
	int ans;
	if(n == 0 || n == 1) return n;
	ans = fibonacci(n-1)+fibonacci(n-2);
	return ans;
}
int main()
{
	printf("%d\n",fibonacci(5));
	printf("%d\n",fibonacci(40));
	return 0;
}
