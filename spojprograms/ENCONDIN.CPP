/*
kamalsam
*/
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int i,n=s.size(),count=0,set1=0,terminate=0;
        if(n==0)
         printf("\n");
        else
        {
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
                if(count==9)
                {
                    printf("9%c",s[i]);
                    count=0;
                }
                if(terminate==1)
                {
                    printf("1");
                    terminate=0;
                    set1=0;
                }
            }
            else if(count>0)
            {
                count++;
                printf("%d%c",count,s[i]);
                count=0;
            }
            else if(set1==0)
            {
                printf("1%c",s[i]);
                if(s[i]=='1')
                  printf("1");
                set1=1;
                terminate=1;
            }
            else
            {
                printf("%c",s[i]);
                if(s[i]=='1')
                 printf("1");
            }
        }
        if(count>0)
        {
            count++;
            printf("%d%c",count,s[n-1]);
            count=0;
        }
        else if(terminate==1)
        {
            printf("%c",s[n-1]);
            printf("1");
            if(s[n-1]=='1')
             printf("1");
        }
        else
        {
            printf("1%c1",s[n-1]);
            if(s[n-1]=='1')
             printf("1");
        }
        printf("\n");
        }
    }
    return 0;
}