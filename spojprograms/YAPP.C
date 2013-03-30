/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n;
        long long ans=2,val=2;
        scanf("%d",&n);
        if(n==1)
         printf("1\n");
        else
        {
            n-=2;
            while(n)
            {
                if(n%2!=0)
                 ans=(ans*val)%1000000007;
                val=(val*val)%1000000007;
                n/=2;
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}