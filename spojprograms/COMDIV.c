/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
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
 int t,i;
 long a,b,ans,square,j;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
  long sum=0,ans1;
   scanf("%ld%ld",&a,&b);
   ans=gcd(a,b); 
    square=sqrt(ans);
      for(j=1;j<=square;j++)
      {
         if(ans%j==0)
         { 
            ans1=ans/j;
            if(ans1!=j)
              sum+=2;
            else
              sum+=1;
         }
      }

   printf("%ld\n",sum);
 }
 return 0;
}