/*
kamalsam
*/
#include<stdio.h>
#define INF 19999999
long long total;
void merge(int a[],int p,int q,int r)
{
    int n1,n2,i,k,j;
    n1=(q-p)+1;
    n2=(r-q);
    int left[n1+2],right[n2+2];
    for(i=1;i<=n1;i++)
     left[i]=a[p+i-1];
    for(i=1;i<=n2;i++)
     right[i]=a[q+i];
    left[n1+1]=right[n2+1]=INF;
    i=j=1;
    for(k=p;k<=r;k++)
    {
        if(left[i]<=right[j])
         a[k]=left[i++];
        else
        {
         total+=(n1-(i-1)); 
         a[k]=right[j++];
        }   
    }
}
void mergesort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d",&n);
        int a[n+2];
        for(j=0;j<n;j++)
         scanf("%d",&a[j]);
        mergesort(a,0,n-1);
        printf("%lld\n",total);
        total=0;
    }
    return 0;
}