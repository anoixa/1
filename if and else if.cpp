#include<stdio.h>
int main()
{
	int score;
	printf("请输入考试分数\n");
	scanf("%d",&score);
	if(score < 0 || score > 100)
	{
		printf("优秀\n");
	} 
	else if(score >= 90)
	{
		printf("优秀\n");
		scanf()
	}
	else if(score >= 80)
	{
		printf("良好\n"); 
	}
	else if(score >= 70)
	{
		printf("及格\n");
	}
	else if(score >= 60)
	{
		printf("不及格\n"); 
	}
	else
	{
		printf("不及格\n");
	}
	return 0;
}
