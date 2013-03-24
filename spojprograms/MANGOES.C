#include<stdio.h>
int main()
{
 long t,i;
 scanf("%ld",&t);
 for(i=0;i<t;i++)
 {
  long long n,ans,ans1,final,ori;
  scanf("%lld",&n);
  ans=n-2;
  if(ans%2==0)
   ans1=ans/2;
  else
   ans1=(ans+1)/2;
  printf("%lld\n",(ans1*ans1)%n);
 }
 return 0;
}
