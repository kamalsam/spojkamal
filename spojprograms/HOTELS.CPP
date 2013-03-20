/*
kamalsam
*/
#include<stdio.h>
int main()
{
    long n,i,j=0,count=0;
    long m,sum=0,r=0;
    scanf("%ld%ld",&n,&m);
    long a[n],max=0;
    for(i=0;i<n;i++)
     scanf("%ld",&a[i]);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>m)
        {
          if((sum-a[i])>max)
             max=sum-a[i];
        }
        while(sum>m)
        { sum-=a[j++]; count=1; }
        if(count==1)
        { 
          if(sum>max)
           max=sum;
          count=0; 
        }
    }
    printf("%ld\n",max);
    return 0;
}