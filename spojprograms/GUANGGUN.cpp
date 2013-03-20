/*
kamalsam
*/
#include<stdio.h>
int main()
{
    long long val;
    while(scanf("%lld",&val)!=-1)
        printf("%lld\n",(81*(val/9))+((val%9)*(val%9)));
    return 0;
}