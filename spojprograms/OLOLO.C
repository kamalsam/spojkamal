/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long a,b;
    scanf("%lld",&a);
    for(i=1;i<n;i++)
    {
        scanf("%lld",&b);
        a^=b;
    }
    printf("%lld\n",a);
    return 0;
}