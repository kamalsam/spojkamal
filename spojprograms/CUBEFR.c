/*
kamalsam
*/
#include<stdio.h>
void func(long a[])
{
    long i,j,ans,count;
    count=1;
    for(i=2;i<=100;i++)
    {
      ans=i*i*i;
      for(j=ans;j<=1000000;j+=ans)
        a[j]=-1;
    }
    for(i=1;i<=1000000;i++)
    {
      if(a[i]!=-1)
        a[i]=count++;
    }
}
int main()
{
    long n,i,t;
    scanf("%ld",&t);
    long a[1000001]={0};
    func(a);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        if(a[n]==-1)
         printf("Case %ld: Not Cube Free\n",i);
        else
         printf("Case %ld: %ld\n",i,a[n]);
    }
    return 0;
}