/*
kamalsam
*/
#include<stdio.h>
long sort(long a,long b,long c,long d)
{
    long ans;
    ans=(a>b)?((a>c)?a:c):((b>c)?b:c);
    if(ans>d)
     return ans;
    else
     return d;
}
int main()
{
    long a,b,c,d,i,max1,max2,ans;
    i=1;
    while(scanf("%ld%ld%ld%ld",&a,&b,&c,&d)!=-1)
    {
        max1=sort(a,b,c,d);
        if(max1==a) 
         a=-1;
        else if(max1==b)
         b=-1;
        else if(max1==c)
         c=-1;
        else if(max1==d)
         d=-1; 
        max2=sort(a,b,c,d);
        ans=max1+max2;
        printf("Case %ld: %ld\n",i++,ans);
    }
    return  0;
}