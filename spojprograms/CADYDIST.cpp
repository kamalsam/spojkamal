/*
kamalsam
*/
#include<iostream>
#include<algorithm>
#include<functional>
#include<stdio.h>
using namespace std;
int main()
{
    while(1)
    {
        unsigned long long int n;
        scanf("%llu",&n);
        if(n==0)
         break;
        else
        {
            unsigned long long int c[n],i,p[n],ans=0;
            for(i=0;i<n;i++)
             scanf("%llu",&c[i]);
            for(i=0;i<n;i++)
             scanf("%llu",&p[i]);
            sort(c,c+n,greater<unsigned long long int>());
            sort(p,p+n);
            for(i=0;i<n;i++)
             ans+=(c[i]*p[i]);
            printf("%llu\n",ans);
        }
    }
    return 0;
}