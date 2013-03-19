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
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,k,j,r=0;
        scanf("%d%d",&n,&k);
        long a[n],ans[n],min;
        for(j=0;j<n;j++)
         scanf("%ld",&a[j]);
        sort(a,a+n,greater<int>());
        for(j=0;j<=n-k;j++)
          ans[r++]=a[j]-a[j+k-1];
        min=1000000001;
        for(j=0;j<r;j++)
         if(ans[j]<min)
          min=ans[j];
        printf("%ld\n",min);
    }
    return 0;
}