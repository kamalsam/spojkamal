/*
kamalsam
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
 while(1)
 {
   string s,s1;
   cin>>s>>s1;
   if(s.compare("*")==0&&s1.compare("*")==0)
    break;
   else
   {
       int i=0,n,m;
       string ori,ori1;
        n=s.size();
        m=s1.size();
        while(s[i]=='0'&&i<n)
         i++;
        for(;i<n;i++)
         ori+=s[i];
        i=0;
        while(s1[i]=='0'&&i<m)
         i++;
        for(;i<m;i++)
         ori1+=s1[i];
        int ans,ans1,less1=0,great=0;
        n=ori.size();
        m=ori1.size();
        if(n>m)
         great=1;
        else if(n<m)
         less1=1;
        if(n==m)
        {
         for(i=0;i<n;i++)
         {
            if(ori[i]!=ori1[i])
            {
                ans=ori[i];
                ans1=ori1[i];
                if(ans<ans1)
                {
                    i=n;
                    less1=1;
                }
                else
                {
                    i=n;
                    great=1;
                }
            }
         }
        }
        if(less1)
         printf("<\n");
        else if(great)
         printf(">\n");
        else
         printf("=\n");
   }
 }
 return 0;
}