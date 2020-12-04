#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define N 10

void fun1()     //1
{
	int n;
	int i;
	int g,s,b; 
	printf("请输入终值(<999):\n"); 
	scanf("%d",&n);
	for(i=100;i<=n;i++)
	{
		g = (i/1)%10;
		s = (i/10)%10;
		b = (i/100)%10;
	    if(i==(pow(g,3)+pow(s,3)+pow(b,3)))
	    {
	    	printf("%d\n",i);
		}
    } 
}
void fun2()    //2
{
	int n;
	int i;
	printf("(素数)请输入要判断的数:\n"); 
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("no\n");
			break;
		}
	}
	if(i>=n)
	{
		printf("Yes\n");
	}
}
void fun3()    //3
{
    int n;
    int i,s;
    printf("(完数)请输入要判断的数:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        s += i;
	}
	if(s==n)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}
void fun4()    //4
{
	
} 
int main()     //主函数 
{
	char Z;    //调用相应题目 
	char c = 'end',b;
	int a[100]={0,1,2,3,4};
	printf("请输入相应题号(输入0显示题号及其内容,输入end结束)\n");
	scanf("%d",&Z);
	while(Z==a[100])
	{
		if(Z == a[0],a[1],a[2],a[3])
		    if(Z == 0)
	        {
		        printf("1:100-999水仙花数\n");
		        printf("2:判断素数\n");
		        printf("3:判断完数\n");
		        break; 
            }
            else
            {
		        switch(Z)
	            {
		            case 1:fun1();break;
		            case 2:fun2();break;
		            case 3:fun3();break;
		            case 4:fun4();break;
	            }
	        }
	    else
	    {
	    	break;
	    	b=getchar();
		}
    }
	system("pause"); 
	return 0;
}


