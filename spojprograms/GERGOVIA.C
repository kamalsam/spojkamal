/*
kamalsam
*/
#include<stdio.h>
#include<stdlib.h>
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
            int a[n],b[n],c[n],i,j,p=0,q=0;
            long long count=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&c[i]);
                if(c[i]<0)
                 b[p++]=i;
                else
                 a[q++]=i;
            }
            i=j=0;
            while(i<q&&j<p)
            {
                long long ans=c[a[i]]+c[b[j]];
                if(ans>0)
                {
                    count+=(abs(c[b[j]])*abs(a[i]-b[j]));
                    c[a[i]]=ans;
                    j++;
                }
                else if(ans<0)
                {
                    count+=(c[a[i]]*abs(a[i]-b[j]));
                    c[b[j]]=ans;
                    i++;
                }
                else
                {
                    count+=(c[a[i]]*abs(a[i]-b[j]));
                    i++;
                    j++;
                }
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}