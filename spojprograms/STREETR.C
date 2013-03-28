/*
kamalsam
*/
#include<stdio.h>
long gcd(long a,long b)
{
 long c;
 while(b!=0)
 {
   c=a%b;
   a=b;
   b=c;
 }
 return a;
}
int main()
{
    long n,i;
    scanf("%ld",&n);
    long a[n+10],diff[n+10],mini,count,ans;
    count=0;
    for(i=1;i<=n;i++)
        scanf("%ld",&a[i]);
    for(i=2;i<=n;i++)
       diff[i-1]=a[i]-a[i-1];
    mini=diff[1];
    for(i=2;i<n;i++)
     mini=gcd(mini,diff[i]);
    for(i=1;i<n;i++)
    {
     count+=((diff[i]/mini)-1);
    }
    printf("%ld\n",count);
    return 0;
}