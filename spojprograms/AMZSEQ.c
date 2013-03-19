/*
kamalsam
*/
#include<stdio.h>
long long c[100];
long long func(int n)
{
    if(c[n])
     return c[n];
    if(n==0)
     return 1;
    if(n==1)
     return 3;
    else
    {
        c[n]=2*func(n-1)+func(n-2);
        return c[n];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",func(n));
    return 0;
}