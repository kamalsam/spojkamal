/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int prime[40010],primereal[40010],r;
void sieve()
{
    int i,j;
    for(i=2;i<=35000;i++)
    {
        if(prime[i]==0)
        {
            primereal[r++]=i;
            for(j=i*i;j<=35000;j+=i)
             prime[j]=1;
        }
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    sieve();
    for(i=0;i<t;i++)
    {
        long a,b,j,k;
        scanf("%ld%ld",&a,&b);
        if(a==1)
         a++;
        for(j=a;j<=b;j++)
        {
          int flag=0,val=sqrt(j);
          for(k=0;primereal[k]<=val;k++)
          {
            if(j%primereal[k]==0)
            { flag=1; break; }
          }
          if(flag==0)
           printf("%ld\n",j);
        }
        printf("\n");
    }
    return 0;
}