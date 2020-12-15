#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

#define N 10

void mainMenu();//总主菜单
void mainMenuAction();
void fzmainMenu();//分支部分菜单函数
void fzmainMenuAction();
void xhmainMenu();//循环部分菜单函数
void xhmainMenuAction();
void szmainMenu();//数组部分菜单函数
void szmainMenuAction();

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
    mainMenuAction();

    return 0;
}

/***************************/

//菜单内容区
/*************************************/
void mainMenu()//总主菜单内容
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
}
void fzmainMenu()//分支主菜单内容
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
}
void xhmainMenu()//循环主菜单内容
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
    printf( "|  7 金字塔        |\n");
    printf( "|  8 同构数        |\n");
    printf( "--------------------\n");
    printf( "|  0 返回主菜单     |\n");
    printf( "--------------------\n");
}
void szmainMenu()//数组主菜单内容
{
    printf( "----------------------\n");
    printf( "|   数组结构部分程序  |\n");
    printf( "----------------------\n");
    printf( "|  1 逆序输出数组     |\n");
    printf( "|  2 累加求和         |\n"); 
    printf( "|  3 字符串长度       |\n");
    printf( "|  4 统计字母个数     |\n");
    printf( "|  5 变换字符         |\n");
    printf( "|  6 删除字符         |\n");
    printf( "|  7 统计字符         |\n");
    printf( "|  8 判断回文         |\n");
    printf("----------------------\n");
    printf( "|  0 返回主菜单       |\n");
    printf("----------------------\n");
}
/*************************************/

void mainMenuAction()  //总主菜单
{
    mainMenu();
    while(1)
    {
        int n;
        printf("请选择(0-3):");
        scanf("%d", &n);
        if( n==1 )
        {
            system("cls");
            fzmainMenuAction();
            break;
        }
        else if( n==2 )
        {
            system("cls");
            xhmainMenuAction();
            break;
        }
        else if( n==3 )
        {
            system("cls");
            szmainMenuAction();
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
            printf("请按任意键继续...\n");
            getch();
            system("cls");
            mainMenuAction();
        }
    }
}

//分菜单区
/*****************************************/
void fzmainMenuAction() //分支主菜单
{
    getchar();
    fzmainMenu();
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
            mainMenuAction();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            printf("请按任意键继续...\n");
            getch();
            system("cls");
            fzmainMenuAction();
        }
    }
}
void xhmainMenuAction() //循环主菜单
{
    xhmainMenu();
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
            mainMenuAction();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            printf("请按任意键继续...\n");
            getch();
            system("cls");
            xhmainMenuAction();
        }
    }
}
void szmainMenuAction() //循环主菜单
{
    szmainMenu();
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
            mainMenuAction();
            break;
        }
        else
        {
            printf("没有这项功能。\n");
			printf("请核对后重新选择\n");
            printf("请按任意键继续...\n");
            getch();
            system("cls");
            szmainMenuAction();
        }
    }
}
/*****************************************/


/*****************************************/   //子函数区
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
    fzmainMenuAction();

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
    fzmainMenuAction();

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
    fzmainMenuAction();
    
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
    fzmainMenuAction();

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
    fzmainMenuAction();

}
void fz6()//三角形类型
{
    printf("你正在调用分支函数6\n");
    printf("请输入长宽高:");
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
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
    fzmainMenuAction();

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
    xhmainMenuAction();
    
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
    xhmainMenuAction();

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
    xhmainMenuAction();

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
    xhmainMenuAction();

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
    xhmainMenuAction();

}
void xh6()//n的阶乘
{
    printf("你正在调用函数6\n");
    printf("请输入一个数:");
    int n,a;
	int i,j=1;
	scanf("%d",&n);
    if( n != 0 )
    {
        for(i=1;i<=n;i++)
        {
		    if(n != 0)
		    {
			    j = j*i;
			    a = j;
		    }
		    else
		    {
			    a = 1;
			    break;
		    }
        }
    }
    else
    {
        a = 1;
    }
	printf("结果:%d",a);
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenuAction();
	
}
void xh7()//金字塔
{
    printf("你正在调用函数7\n");
    printf("请输入行数:");
    int i,j,k;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n-1;k++)
            printf(" ");
        for(j=1;j<+2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenuAction();

}
void xh8()//同构数
{
    printf("你正在调用函数8\n");
    printf("请输入一个数:");
    long int m,m1,n,a,b;
    scanf("%ld",&m);
    m1=m;
    n=m*m1;
    while(m1)
    { 
        a=m1%10; b=n%10;
        if(a!=b)
        {
            break;
        }
        m1=m1/10; 
        n=n/10;
    }
    if(m1!=0) 
    {
        printf("no\n");
    }
    else 
    {
        printf("yes\n");
    } 
    printf("\n");
    system("pause");
    system("cls");
    xhmainMenuAction();

}
/**********************************/

//此为数组函数区
/**********************************/
void sz1()//数组倒序
{
    printf("你正在调用函数1\n");
    printf("请输入10个数:\n");
    int a[10], i;
    for(i=0; i<10; i++)//输入数组所有元素
    {
        scanf("%d",&a[i]) ;
    }
    for(i=9; i>=0;  i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();

}
void sz2()//数组求和
{
    printf("你正在调用函数2\n");
    printf("请输入10个数:\n");
    int a[10],i,s;
    s=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        s+=a[i];
    }
    printf("和为:%d\n",s);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();

}
void sz3()//数组长度
{
    printf("你正在调用函数3\n");
    printf("请输入字符串:\n");
    char string[100];
    int sum=0;
    int i;
    getchar();
    gets(string);
    for (i=0; i<100&&string[i]!='\0'; i++) 
    {
        sum = sum + 1;
    }
    printf("字符串长度为:%d\n",i);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();
} 
void sz4()//统计字母个数
{
    printf("你正在调用函数4\n");
    printf("请输入字符串:\n");
    char s[10000];
    int i,zm=0;
    getchar();
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            zm++;
        }
    }
    printf("字母个数为:%d\n",zm);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();

}
void sz5()//变换字符
{ 
    printf("你正在调用函数5\n");
    printf("请输入字符串:\n");
    char s[10000],ch;
    int i;
    getchar();
    gets(s);
    scanf("%c",&ch);
    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
        {
            s[i] -= 32;
        }
    }
    printf("新的字符串为\n");
    puts(s);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();
    
}
void sz6()
{
    printf("你正在调用函数6\n");
    printf("请输入字符串:\n");
    char s[10000],ch;
    int i,j=0;
    getchar();
    gets(s);
    scanf("%c",&ch);
    for(i=0;s[i];i++)
    {
        if(s[i]!=ch)
        {
            s[j++]=s[i];
        }
        s[j]='\0';
    }
    printf("新的字符串为\n");
    puts(s);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();

}
void sz7()
{
    printf("你正在调用函数7\n");
    printf("请输入字符串:\n");
    char s[200];
    int i;
    int dx=0,xx=0,sz=0,kg=0,qt=0;
    getchar();
    gets(s);
    for(i=0; s[i] != '\0'; i++)
    {
        if( s[i]>='A' && s[i]<='Z')
        {
            dx++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            xx++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            sz++;
        }
        else if( ' '== s[i])
        {
            kg++;
        }
        else
        {
            qt++;
        }
    }
    printf("大写:%d 小写:%d 数字:%d 空格:%d 其他:%d\n", dx, xx, sz, kg, qt);
    printf("\n");
    system("pause");
    system("cls");
    szmainMenuAction();

}
void sz8()
{
    printf("你正在调用函数8\n");
    printf("请输入字符串:\n");
    char s[200];
    int i,j,flag=1;
    getchar();
    gets( s );
    for(j=0;s[j];j++);
    j--;
    for(i=0;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break; 
        }
    }
    if(flag==1)
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
    szmainMenuAction();

}
/**********************************/
/*****************************************/