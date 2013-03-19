/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int n,k,i,pos=0,max=0,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i;
        }
    }
    printf("%d ",max);
    for(i=1;i<n-k+1;i++)
    {
        if(i==pos+1)
        {
            max=0;
            for(r=i;r<i+k;r++)
            {
                if(a[r]>max)
                {
                    max=a[r];
                    pos=r;
                }
            }
        }
        else
        {
            if(a[i+k-1]>max)
            {
                max=a[i+k-1];
                pos=i+k-1;
            }
        }
        printf("%d ",max);
    }
    printf("\n");
    return 0;
}