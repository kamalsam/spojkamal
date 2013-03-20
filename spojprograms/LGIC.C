/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    long long n,ans=1,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
     ans*=i;
    ans+=pow(2,n);
    ans-=n;
    printf("%lld\n",ans);
    return 0;
}