/*
kamalsam
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",max(0,n-2));
    }
    return 0;
}