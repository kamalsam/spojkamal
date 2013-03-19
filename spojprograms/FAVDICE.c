/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i;
    double n,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&n);
        double sum=0.0,ans;
        for(j=1;j<=n;j++)
         sum+=(1/j);
        ans=sum*n;
        printf("%.2lf\n",ans);        
    }
    return 0;
}