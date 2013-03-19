/*
kamalsam
*/
#include<stdio.h>
#include<math.h>  
int main()
{
    int x,i,z;
    long long int n,ans,p;
    while(1)
    {
       scanf("%de%d",&x,&z);
       n=x*pow(10,z);
       if(n==0)
         break;
       else
       {
         p=0;
         i=1;
         while(p<=n)
         {
           p=pow(2,i);
           i++;
         }
         i-=2;
         p=pow(2,i);
         ans=(2*(n-p))+1;
         printf("%lld\n",ans);
       }
    }
    return 0;
}