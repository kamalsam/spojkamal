/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int search(int a[],int i,int j,int val)
{
    if(i<=j)
    {
        int pos=(j-i)/2;
        if(val>a[i+pos])
         return search(a,pos+i+1,j,val);
        else if(val<a[i+pos])
         return search(a,i,pos+i-1,val);
        else
         return 1;
    } 
    else 
     return 0;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,j,val,count=0;
        scanf("%d%d",&n,&m);
        int a[n+10];
        for(j=0;j<n;j++)
         scanf("%d",&a[j]);          
        sort(a,a+n);
        for(j=0;j<n;j++)
        {
            val=m-a[j];
            if(search(a,0,n-1,val))
             count++;
        }
       printf("%d\n",count/2);
    }
    return 0;
}