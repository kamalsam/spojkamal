/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int n,i;
    double ans,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&r);
        ans=(4*r*r)+0.25;
        printf("Case %d: ",i+1);
        printf("%.2lf\n",ans);
    }
    return 0;
}
