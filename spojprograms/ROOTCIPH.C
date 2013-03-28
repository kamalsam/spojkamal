/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        long long a,b,c,ans;
        scanf("%lld%lld%lld",&a,&b,&c);
        ans=a*a-2*b;
        printf("%lld\n",ans);
    }
    return 0;
}