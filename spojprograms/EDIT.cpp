/*
kamalsam
*/
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string s;
    int n,i,max,count;
   while((cin>>s))
   {
       n=s.length();
    count=0;
     for(i=0;i<n;i++)
     {
          if(i%2==0)
          {
              if(isupper(s[i]))
               count++;
          }
          else
          {
              if(islower(s[i]))
               count++;
          }
     }
     max=count;
     count=0;
     for(i=0;i<n;i++)
     {
          if(i%2==0)
          {
              if(islower(s[i]))
               count++;
          }
          else
          {
              if(isupper(s[i]))
               count++;
          }
     }
     if(max<count)
      cout<<max<<endl;
     else
      cout<<count<<endl;
   } 
     return 0;
}