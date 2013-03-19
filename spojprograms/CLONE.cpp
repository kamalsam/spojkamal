/*
kamalsam
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    while(1)
    {
       string s[30000];
       int n,i,m;
       scanf("%d%d",&n,&m);
       if(n==0&&m==0)
        break;
       else
       {
         for(i=0;i<n;i++)
          cin>>s[i];
         sort(s,s+n);
         int count=1,a[70000]={0};
         for(i=0;i<n;i++)
         {
             if(s[i]==s[i+1])
              count++;
             else
             {
              a[count]++;
              count=1;
             }
         }
         for(i=1;i<=n;i++)
          printf("%d\n",a[i]);
       }
    }
  return 0;    
}