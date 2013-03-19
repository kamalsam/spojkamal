/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i;
    long n,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        ans=(n+1)/2;
        printf("%ld\n",ans);
    }
    return 0;
}