#include<stdio.h>
#include<time.h> 
int main()
{
	unsigned int t = time(0);
	unsigned int h = (t % (3600*24)/3600 + 8)% 24;
	unsigned int m = t % 3600/60;
	unsigned int s = t % 60;
	printf("现在是北京时间%d:%d:%d\n",h,m,s);
	return 0;
	
}
