/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    double a,b,c,d,s,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s=0.5*(a+b+c+d);
        ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",ans);
    }
    return 0;
}
