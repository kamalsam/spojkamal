/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i,a,b;
    long long int n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&n,&m);
        a=n%2;
        b=m%2;
        if(a!=0&&b!=0)
        {
            if(n>m)
             printf("D\n");
            else if(n<=m)
             printf("R\n");
        }
        else if(a==0&&b==0)
        {
            if(n>m)
             printf("U\n");
            else if(n<=m)
             printf("L\n");
        }
        else if(a!=0&&b==0)
        {
            if(n>m)
             printf("U\n");
            else if(n<m)
             printf("R\n");
        }
        else
        {
            if(n>m)
             printf("D\n");
            else if(n<m)
             printf("L\n");
        }
    }
    return 0;
}