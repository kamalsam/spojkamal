/*
kamalsam
*/
#include<stdio.h>
int max(int a,int b,int c)
{
 int s;
 s=(a>b)?((a>c)?a:c):((b>c)?b:c);
 return s;
} 
int main()
{
 int m,n,a[102][102],r,l;
 int i,j,mini;
 scanf("%d",&r);
 for(l=0;l<r;l++)
 {
  scanf("%d%d",&m,&n);
  for(i=0;i<=m;i++)
   a[i][0]=0;
  for(i=0;i<=n;i++)
   a[0][i]=0;
  for(i=0;i<=m;i++)
   a[i][n+1]=0;
  for(i=1;i<=m;i++)
  {
   for(j=1;j<=n;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=1;i<=m;i++)
  {
   for(j=1;j<=n;j++)
   {
    a[i][j]=max(a[i-1][j-1],a[i-1][j],a[i-1][j+1])+a[i][j];
   }
  }
  i=m;
  mini=0;
  for(j=1;j<=n;j++)
  {
   if(a[i][j]>mini)
    mini=a[i][j];
  }  
  printf("%d\n",mini);
 }
return 0;
}