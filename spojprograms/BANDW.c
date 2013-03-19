/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[600],s1[600];
    int i,n;
    while(1)
    {
        scanf("%s%s",s,s1);
        if((strcmp(s,"*")==0)&&(strcmp(s1,"*")==0))
         break;
        else
        {
            n=strlen(s1);
            int count=0;
            if(n==1&&s[0]!=s1[0])
              count++;
            for(i=1;i<n;i++)
            {
                if(s[i]==s1[i]&&s[i-1]!=s1[i-1])
                 count++; 
                if(i==n-1&&s[i]!=s1[i])
                 count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
