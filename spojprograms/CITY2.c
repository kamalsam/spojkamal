/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int i,j,n,r=1;
    while(scanf("%d",&n)!=-1)
    {
        long a[n],count=0;
        int count1;
        for(i=0;i<n;i++)
         scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
        {
            count1=0;
           if(a[i]!=0)
           {
            for(j=i-1;j>=0;j--)
            {
                if(a[i]>a[j])
                 break;
                else if(a[i]==a[j])
                {
                    count1=1;
                    break;
                }
            }
           }
           else
            count1=1;
            if(count1!=1)
             count++;
        }
        printf("Case %d: %ld\n",r++,count);
    }
    return 0;
}