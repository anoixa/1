#include<stdio.h>
#include<string.h> 
int main()
{
    int A[10],i;
    int maxid,j;
    int t,n,ws,k;
    scanf("%d",&n); 
    ws=0;
    while(n)
    {
        A[ws]=n%10;
        ws++;
        n/=10;
    }
    for(i=0;i<ws-1;i++)
    {
        maxid=i;
    }
    for(j=i+1;j<ws;j++)
    {
        if(A[maxid]<A[j])
        {
            maxid=j;
        }
    }
    t=A[maxid];A[maxid]=A[i];A[i]=t;
    n=0;
    for(i=0;i<ws;i++)
        n=n*10+A[i];
    printf("%d\n",n);
}
