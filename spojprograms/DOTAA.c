/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int i,j,n,t,m,d,h,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d%d%d",&n,&m,&d);
        for(j=0;j<n;j++)
        {
            scanf("%d",&h);
            if(h%d==0)
            {
             if((h/d)>1)
              sum+=((h/d)-1);
            }
            else
             sum+=(h/d);
        }
        if(sum>=m)
         printf("YES\n");
        else
         printf("NO\n");
    }
    return 0;
}