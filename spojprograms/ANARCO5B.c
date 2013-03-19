/*
kamalsam
*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
         break;
        else
        {
            int m,i;
            int v[n];
            int a[20000]={0},b[20000]={0};
            for(i=0;i<n;i++)
            {
                scanf("%d",&v[i]);
                if(v[i]<0)
                 b[-v[i]]=1;
                else
                 a[v[i]]=1;
            }
            scanf("%d",&m);
            int v1[m],r=0;
            long sum=0,check[10000];
            for(i=0;i<m;i++)
            {
                scanf("%d",&v1[i]);
                if(v1[i]<0)
                {
                    if(b[-v1[i]]==1)
                    {
                        b[-v1[i]]++;
                        sum+=v1[i];
                        check[r++]=sum;
                        sum=0;
                    }
                    else
                     sum+=v1[i];
                }
                else
                {
                    if(a[v1[i]]==1)
                    {
                        a[v1[i]]++;
                        sum+=v1[i];
                        check[r++]=sum;
                        sum=0;
                    }
                    else
                     sum+=v1[i];
                }
            }
            int q=r;
            check[r++]=sum;
            r=0;
            long check1[10000];
            sum=0;
            for(i=0;i<n;i++)
            {
                if(v[i]<0)
                {
                    if(b[-v[i]]>1)
                    {
                        sum+=v[i];
                        check1[r++]=sum;
                        sum=0;
                    }
                    else
                     sum+=v[i];
                }
                else
                {
                    if(a[v[i]]>1)
                    {
                        a[v[i]]++;
                        sum+=v[i];
                        check1[r++]=sum;
                        sum=0;
                    }
                    else
                     sum+=v[i];
                }
            }
            check1[r++]=sum;
            long ans=0;
            for(i=0;i<r;i++)
            {
                if(check[i]>check1[i])
                 ans+=check[i];
                else
                 ans+=check1[i];
            }
            printf("%ld\n",ans);
        }
    }
    return 0;
}