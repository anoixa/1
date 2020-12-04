#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char c[100];
    gets(c);
    n = strlen(c);
    for(i=0;i<n;i++)
    {
        if((c[i]>='a') && (c[i]<='z'))
        {
            c[i] = (c[i]-'a'+4)%26 + 'a';
        }
        else if((c[i]>='A') && (c[i]<='A'))
        {
            c[i] = (c[i]-'A'+4)%26 + 'A';
        } 
    }
    puts(c);
    return 0;
}
