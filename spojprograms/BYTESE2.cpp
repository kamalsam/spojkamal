/*
kamalsam
*/
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int count,k,best;
        long ent[n],exi[n];
        for(j=0;j<n;j++)
         scanf("%ld%ld",&ent[j],&exi[j]);
        sort(exi,exi+n);
        sort(ent,ent+n);
        best=count=0;
        for(j=0,k=0;j<n&&k<n;)
        {
            if(ent[j]<exi[k])
             count++, j++;
            else 
              count--, k++;          
            best=max(count,best);
        }
        printf("%d\n",best);
    }
    return 0;
}