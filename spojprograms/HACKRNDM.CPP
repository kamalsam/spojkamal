/*
kamalsam
*/
#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
int main()
{
    long i,n,k,count,val;
    map<long,int> a;
    scanf("%ld%ld",&n,&k);
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&val);
        a[val]=1;
        if(((a[val]+a[val+k])/2)==1)           
         count++;
        if(((a[val]+a[val-k])/2)==1)
         count++;
    }
    printf("%ld\n",count);
    return 0;
}