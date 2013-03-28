/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,target,speed,r=1;
    scanf("%d",&t);
    float g=9.806;
    double pi=2*acos(0.0),ans,ans1;
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&target,&speed);
        ans=(target*g)/(speed*speed);
        if(ans<=1)
        {
            ans1=asin(ans)*180.0/pi;
            printf("Scenario #%d: %.2lf\n",r++,ans1/2);
        }
        else
         printf("Scenario #%d: -1\n",r++);
    }
    return 0;
}