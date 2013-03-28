/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
long int n,k;
int m,i,j,r;
scanf("%ld",&n);
int count[n],c;
for(i=0;i<n;i++)
{
 scanf("%ld%d",&k,&m);
 int a[m];
 for(j=0;j<m;j++)
  scanf("%d",&a[j]);
 sort(a,a+m,greater<int>());
 c=a[0];
 j=r=1;
 while(r!=0)
 {
   if(c>=k)
    r=0;
   else
   {
     c+=a[j];
     j++;
   } 
 }
 if(j>m)
  count[i]=0;
 else
  count[i]=j;
} 
  
for(i=0;i<n;i++)
{
 printf("Scenario #%d:\n",i+1);
 if(count[i]==0)
  printf("impossible\n"); 
 else
  printf("%d\n",count[i]);
}
return 0;
} 