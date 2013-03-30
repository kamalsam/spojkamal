/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[2000];
    int i,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        n=strlen(s);
        int count=0;
        for(i=0;i<n;i++)
        {
           if(count%2==0)
           {
             if(s[i]=='1')
              count++;
           }
           else
           {
             if(s[i]=='0')
              count++;
           }
        }
        printf("%d\n",count);
    }
    return 0;
}