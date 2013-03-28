/*
kamalsam
*/
#include<stdio.h>
int max(int a,int b)
{
  if(a>b)
    return a;
  else 
    return b;
}
int main()
{
    int n,m,i,j,x,y;
    scanf("%d%d",&n,&m);
    int a[n+1][m+1];
    scanf("%d%d",&x,&y);
    for(i=1;i<=n;i++)
     for(j=1;j<=m;j++)
      scanf("%d",&a[i][j]);
    for(i=x;i<=n;i++)
     a[i][y-1]=0;
    for(j=y-1;j<=m;j++)
     a[x-1][j]=0;
    for(i=x;i<=n;i++)
    {
      for(j=y;j<=m;j++)
      {
        a[i][j]=max(a[i-1][j],a[i][j-1])-a[i][j];
        if(a[x][y]<0)
         a[x][y]=-a[x][y];
      }
    }
    if(a[n][m]<0)
     printf("N\n");
    else
    {
     printf("Y");
     printf(" %d\n",a[n][m]);
    }
    return 0;
}