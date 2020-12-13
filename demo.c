#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

#define N 10

void mainMenu();//总主菜单
void fzmainMenu();//分支部分菜单函数
void xhmainMenu();//循环部分菜单函数
void szmainMenu();//数组部分菜单函数

//分支部分函数声明
void fz1();
void fz2();
void fz3();
void fz4();
void fz5();
void fz6();

//循环部分函数声明
void xh1();
void xh2();
void xh3();
void xh4();
void xh5();
void xh6();
void xh7();
void xh8();

//数组部分函数声明
void sz1();
void sz2();
void sz3();
void sz4();
void sz5();
void sz6();
void sz7();
void sz8();

/***************************/
int main()   //main 函数
{
    mainMenu();

    return 0;
    system("pause");
}

/***************************/

void mainMenu()  //总主菜单
{
    printf( "--------------------\n");
    printf( "|  学习成果展示系统 |\n");
    printf( "--------------------\n");
    printf( "|  1 分支结构程序   |\n");
    printf( "|  2 循环结构程序   |\n");
    printf( "|  3 数 组  程 序   |\n");
    printf( "--------------------\n");
    printf( "|  0 退 出  系 统   |\n");
    printf( "--------------------\n");
    while(1)
    {
        int n;
        printf("请选择(0-3):");
        scanf("%d", &n);
        if( n==1 )
        {
            system("cls");
            fzmainMenu();
            break;
        }
        else if( n==2 )
        {
            system("cls");
            xhmainMenu();
            break;
        }
        else if( n==3 )
        {
            system("cls");
            szmainMenu();
            break;
        }
        else if( n==0 )
        {
            exit(0);
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            system("pause");
            system("cls");
            mainMenu();
        }
    }
}


/*****************************************/
void fzmainMenu() //分支主菜单
{
    printf( "------------------------\n");
    printf( "|  分支结构部分程序     |\n");
    printf( "------------------------\n");
    printf( "|  1 及格了吗?          |\n");
    printf( "|  2 求绝对值           |\n");
    printf( "|  3 比较两数中较大     |\n");
    printf( "|  4 判断闰年           |\n");
    printf( "|  5 三角形面积         |\n");
    printf( "|  6 三角形类型         |\n");
    printf( "------------------------\n");
    printf( "|  0 返回主菜单         |\n");
    printf( "------------------------\n");
    while(1)
    {
        int a1;
        printf("请选择(0-6):");
        scanf("%d", &a1);
        if( a1 <=6 && a1 > 0 )
        {
            switch(a1)
            {
                case 1:fz1();break;//调用fz1
                case 2:fz2();break;//调用fz2
                case 3:fz3();break;//调用fz3
                case 4:fz4();break;//调用fz4
                case 5:fz5();break;//调用fz5
                case 6:fz6();break;//调用fz6
            }
        }
        else if(a1 == 0)
        {
            system("cls");
            mainMenu();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            system("pause");
            system("cls");
            fzmainMenu();
        }
    }
}

void xhmainMenu() //循环主菜单
{
    printf( "--------------------\n");
    printf( "|  循环结构部分程序 |\n");
    printf( "--------------------\n");
    printf( "|  1 判断完数      |\n");
    printf( "|  2 求反序数      |\n"); 
    printf( "|  3 存款利息      |\n");
    printf( "|  4 判断素数      |\n");
    printf( "|  5 水仙花数      |\n");
    printf( "|  6 n的阶乘       |\n");
    printf( "|  7 分支程序      |\n");
    printf( "|  8 分支程序      |\n");
    printf( "--------------------\n");
    printf( "|  0 返回主菜单     |\n");
    printf( "--------------------\n");
    while(1)
    {
        int a2;
        printf("请选择(0-8):");
        scanf("%d", &a2);
        if(a2 <=8 && a2 > 0 )
        {
            switch(a2)
            {
                case 1:xh1();break; //调用xh1
                case 2:xh2();break; //调用xh2
                case 3:xh3();break; //调用xh3
                case 4:xh4();break; //调用xh4
                case 5:xh5();break; //调用xh5
                case 6:xh6();break; //调用xh6
                case 7:xh7();break; //调用xh7
                case 8:xh8();break; //调用xh8
            }
        }
        else if(a2 == 0)
        {
            system("cls");
            mainMenu();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            system("pause");
            system("cls");
            xhmainMenu();
        }
    }
}

void szmainMenu() //循环主菜单
{
    printf( "--------------------\n");
    printf( "|  数组结构部分程序 |\n");
    printf( "--------------------\n");
    printf( "|  1 分支程序1     |\n");
    printf( "|  2 分支程序2     |\n"); 
    printf( "|  3 分支程序3     |\n");
    printf( "|  4 分支程序4     |\n");
    printf( "|  5 分支程序5     |\n");
    printf( "|  6 分支程序6     |\n");
    printf( "|  7 分支程序7     |\n");
    printf( "|  8 分支程序8     |\n");
    printf( "--------------------\n");
    printf( "|  0 返回 菜单     |\n");
    printf( "--------------------\n");
    while(1)
    {
        int a3;
        printf("请选择(0-8):");
        scanf("%d", &a3);
        if(a3 <=8 && a3 > 0 )
        {
            switch(a3)
            {
                case 1:sz1();break; //调用sz1
                case 2:sz2();break; //调用sz2
                case 3:sz3();break; //调用sz3
                case 4:sz4();break; //调用sz4
                case 5:sz5();break; //调用sz5
                case 6:sz6();break; //调用sz6
                case 7:sz7();break; //调用sz7
                case 8:sz8();break; //调用sz8
            }
        }
        else if(a3 == 0)
        {
            system("cls");
            mainMenu();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            system("pause");
            system("cls");
            szmainMenu();
        }
    }
}
/*****************************************/



//此为分支函数区
/**********************************/
void fz1()//及格了吗？
{
    printf("你正在调用分支函数1\n");
    double n;
    printf("请输入一个0-100的数:");
    scanf("%lf", &n);
    if(n>0 && n<60)
    {
        printf("failed\n");
    }
    else
    {
        printf("congratulation\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();

}
void fz2()//求绝对值
{
    printf("你正在调用分支函数2\n");
    double n,a;
    printf("请输入一个数:");
    scanf("%lf", &n);
    if(n<0)
    {
        a = -(n);
    }
    else if(n == 0)
    {
        a = 0;
    }
    else
    {
        a = n;
    }
    printf("数的绝对值为:%g\n", a);
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();

}
void fz3()//比较两数中最大
{
    printf("你正在调用分支函数3\n");
    printf("请输入2个正整数:");
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("最大的数为:%d\n", a);
    }
    else
    {
        printf("最大的数为:%d\n",b);
    }
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();
    
}
void fz4()//判断闰年
{
    printf("你正在调用分支函数4\n");
    printf("请输入一个年份:");
    int y;
    scanf("%d",&y);
    if( y%400==0 || y%4==0 && y%100 )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();

}
void fz5()//三角形面积
{
    printf("你正在调用分支函数5\n");
    printf("请输入长宽高:");
    double a,b,c,p,S;
    scanf("%lf%lf%lf",&a,&b,&c);
    if( a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("三角形面积为%.2lf\n",S);
    }
    else
    {
        printf("不能构成三角形\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();

}
void fz6()//三角形类型
{
    printf("你正在调用分支函数6\n");
    printf("请输入长宽高:");
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
    {
        if(a==b&&b==c&&a==c)
        {
            printf("等边三角形\n");
        }
        else if(a==b||b==c||a==c)
        {
            printf("等腰三角形\n");
        }
        else
        {
            printf("一般三角形\n");
        }
    }
    else
    {
        printf("不能构成三角形\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    fzmainMenu();

}
/**********************************/

//此为循环函数区
/**********************************/
void xh1()//判断完数
{
    printf("你正在调用循环函数1\n");
    printf("请输入一个数:");
    int n;
    int x, s;
    scanf("%d",&n);
    s=0,x=1;
    while(x<n)
    {
        if(n%x==0)
        s=s+x;
        x++;
    }
    if(s==n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenu();
    
}
void xh2()//求反序数
{
    printf("你正在调用循环函数2\n");
    printf("请输入一个数:");
    int n,g;
    int newn;
    scanf("%d",&n);
    while(n)
    {
        g = n%10;
        newn = newn*10+g;
        n/=10;
    }
    printf("这个数的反序数为:%d\n",newn);
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenu();

}
void xh3()//存款利息
{
    printf("你正在调用循环函数3\n");
    printf("请输入本金年数利率:");
    double m, rate,interest;
    double a;
    int year;
    int i;
    scanf("%lf%d%lf",&m,&year,&rate);
    a = m;
    for (i = 1; i <= year; i++)
    {
        a = a * (1 + rate);
    }
    interest = a - m;
    printf("利息为:%.2lf\n", interest);
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenu();

}
void xh4()//判断素数
{
    printf("你正在调用循环函数4\n");
    printf("请输入一个正整数;");
    int n;
    int i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("No\n");
            break;
        }
       else
        {
            printf("Yes\n");
            break;
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenu();

}
void xh5()//水仙花数
{
    printf("你正在调用函数5\n");
    printf("请输入一个范围(100-999):");
    int n;
	int i;
	int g,s,b;
	scanf("%d",&n);
	for(i=100;i<=n;i++)
	{
		g = (i/1)%10;
		s = (i/10)%10;
		b = (i/100)%10;
	    if(i==(pow(g,3)+pow(s,3)+pow(b,3)))
	    {
	    	printf("水仙花数为%d\n",i);
		}
    }  
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenu();

}
void xh6()//n的阶乘
{

}
void xh7()
{

}
void xh8()
{

}
/**********************************/

//此为数组函数区
/**********************************/
void sz1()
{
    printf("你正在调用函数1\n");
}
void sz2()
{
    printf("你正在调用函数2\n");
}
void sz3()
{
    printf("你正在调用函数3\n");
}
void sz4()
{
    printf("你正在调用函数4\n");
}
void sz5()
{ 
    printf("你正在调用函数5\n");
}
void sz6()
{
    printf("你正在调用函数6\n");
}
void sz7()
{
    printf("你正在调用函数7\n");
}
void sz8()
{
    printf("你正在调用函数8\n");
}
/**********************************/