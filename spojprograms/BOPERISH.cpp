/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 while(1)
 {
   int n;
   scanf("%d",&n);
   if(n==0)
    break;
   else
   {
     int i,a[n],ans=0;
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     sort(a,a+n);
     int flag=0;
     for(i=0;i<n;i++)
     {
       if(a[n-(i+1)]<=i)
       {
           ans=i;
           flag=1;
           break;
       }
       else if(a[n-(i+1)]==i+1)
       {
           ans=i+1;
           flag=1;
           break;
       }
     }
     if(!flag)
      ans=i;
      printf("%d\n",ans);
   }
 }
 return 0;
}