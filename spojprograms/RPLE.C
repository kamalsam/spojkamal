/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,r,val1,spied=0,j;
        scanf("%d%d",&n,&r);
        int a[1010]={0},val2[r];
        for(j=0;j<r;j++)
        {
            scanf("%d%d",&val1,&val2[j]);
            a[val1]++;
        }
        for(j=0;j<r;j++)
        {
            if(a[val2[j]])
            {
                spied=1;
                j=r;
            }
        }
        if(spied)
         printf("Scenario #%d: spied\n",i+1);
        else
         printf("Scenario #%d: spying\n",i+1);
    }
    return 0;
}