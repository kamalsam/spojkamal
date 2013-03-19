/*
kamalsam
*/
#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
map<long long ,long long> m;
long long func(long long n)
{
    if(n==0)
     return 0;
    long long r=m[n];
    if(r==0)
    {
        r=max(n,func(n/2)+func(n/3)+func(n/4));
        m[n]=r;
    }
    return r;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)!=-1)
    {
     printf("%lld\n",func(n));
     m.clear();
    }
    return 0;
}