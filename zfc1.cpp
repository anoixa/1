#include<stdio.h>
#include<string.h>
int main()
{
    int a,g,s,b;
    int sun,j;
    scanf("%d",&a);
    g= a%10;
    s= (a/10) % 10;
    b= (a/100) % 10;
    sun = g+s+b;
    j = g*s*b; 
    printf("%d\n%d\n",sun,j);
}
