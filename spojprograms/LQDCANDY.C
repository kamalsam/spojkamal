/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long n,count,ans;
        int j;
        count=ans=j=0;
        scanf("%lld",&n);
        while(n>ans)
         ans=pow(2,j++);
        printf("%lld ",ans);
        if(ans==n)
         printf("0\n"); 
        else
        {
         while(n%2==0)
          n/=2;
         while(n>=1)
         {
             count++;
             n/=2;
         }
         printf("%lld\n",count);
        }
    }
    return 0;
}