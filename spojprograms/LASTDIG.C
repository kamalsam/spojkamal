/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
int i,n,a,temp,ans;
long b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%ld",&a,&b);
if(b==0)
printf("1\n");
else
{
temp=b%4;
if(temp==0)
ans=pow(a,4);
else
ans=pow(a,temp);
printf("%d\n",ans%10);
}
}
return 0;
}