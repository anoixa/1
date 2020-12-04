#include<stdio.h>
int main()
{
	int count=0,n;
	char names[10][128];
	scanf("%d",&n);
	if(n < 3)
	{
		printf("%d",&n);
		for(;count<n;++count)
		{
			scanf("%s",names[count]);
			
		}
	}
	for(count = 0;count <n;++count)
	{
		printf("%s\n",names[count]);
	}
	for(;;)
	return 0;
}
