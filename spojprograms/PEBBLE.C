/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[2000];
    int i,n,j,r;
    r=0;
    while(scanf("%s",s)!=-1)
    {
        n=strlen(s);
        int count=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                for(j=i;j<n;j++)
                {
                    if(s[j]=='1')
                     s[j]='0';
                    else
                     s[j]='1';
                }
                count++;
            }
        }
        r++;
        printf("Game #");
        printf("%d",r);
        printf(": ");
        printf("%d\n",count);
    }
    return 0;
}