/*
kamalsam
*/
#include<stdio.h>
long int max(long int a,long int b,long int c)
{
 long int s;
 s=(a<b)?((a<c)?a:c):((b<c)?b:c);
 return s;
} 
int main()
{
 long int m;
 int n;
 n=1;
 while(1)
{
 scanf("%ld",&m);
 if(m==0)
  break;
 else
 {
 long int a[100002][5];
 long int ans,i,j,p;
  for(i=1;i<=m;i++)
   a[i][0]=1000002;
  for(i=0;i<=4;i++)
   a[0][i]=0;
  for(i=1;i<=m;i++)
   a[i][4]=1000002;
  for(i=1;i<=m;i++)
  {
   for(j=1;j<=3;j++)
   {
    scanf("%ld",&a[i][j]);
   }
  }
  a[1][1]=1000002;
  a[1][3]+=a[1][2];
  for(i=2;i<=m;i++)
  {
   for(j=1;j<=3;j++)
   {
    ans=max(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
    if(ans<a[i][j-1])
     a[i][j]=ans+a[i][j];
    else
     a[i][j]=a[i][j-1]+a[i][j];
   }
  }
  for(i=1;i<=m;i++)
   p=a[i][2];
  printf("%d. %ld\n",n++,p);
 }
}
  return 0;
}