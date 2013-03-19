/*
kamalsam
*/
#include<stdio.h>
long long a[1000];
long long fibo(int n)
{
    if(a[n])
     return a[n];
    if(n==1)
     return 2;
    if(n==2)
     return 3;
    else
    {
        a[n]=fibo(n-1)+fibo(n-2);
        return a[n];
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",fibo(n));
    }
    return 0;
}