/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int i,n,a,temp,ans;
char s[1001];
long long b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",s);
scanf("%lld",&b);
a=s[strlen(s)-1]-48;
temp=b%4;
if(a!=0&&b==0)
printf("1\n");
else
{
if(temp==0)
ans=pow(a,4);
else
ans=pow(a,temp);
printf("%d\n",ans%10);
}
}
return 0;
}