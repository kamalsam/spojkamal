/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int a[11],ans,ans1,i,sum,sum1;
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    sum=0;
    for(i=0;i<10;i++)
    {
      sum+=a[i];
      if(sum>=100)
      {
       sum1=sum-a[i];
       break;
      }
    }
    ans=sum-100;
    ans1=100-sum1;
    if(ans<=ans1)
     printf("%d",sum);
    else
     printf("%d",sum1);
    return 0;
}