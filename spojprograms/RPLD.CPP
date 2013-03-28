/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,r;
        scanf("%d%d",&n,&r);        
        int bit=0;
        map<long long,int> m;
        for(j=0;j<r;j++)
        {
            int i,c;
            scanf("%d%d",&i,&c);            
            long long ans=(i*10000)+c;
            m[ans]++;
            if(m[ans]>1)
             bit=1;
        }
        if(bit==0)
         printf("Scenario #%d: possible\n",i+1);
        else
         printf("Scenario #%d: impossible\n",i+1);
    }
    return 0;
}