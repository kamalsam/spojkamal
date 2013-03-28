/*
kamalsam
*/
#include<stdio.h>
int min(int a,int b,int c)
{
    int ans;
    ans=(a<b)?((a<c)?a:c):((b<c)?b:c);
    return ans;
}
int mini(int a,int b)
{
    int ans;
    ans=(a<b)?a:b;
    return ans;
}
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n+2][6],ans;
        for(j=1;j<=n;j++)
         for(k=1;k<=3;k++)
          scanf("%d",&a[j][k]);
        for(j=2;j<=n;j++)
        {
             a[j][1]+=mini(a[j-1][2],a[j-1][3]);
             a[j][2]+=mini(a[j-1][1],a[j-1][3]);
             a[j][3]+=mini(a[j-1][1],a[j-1][2]);
        }
        ans=min(a[n][1],a[n][2],a[n][3]);
        printf("%d\n",ans);
    }
    return 0;
}