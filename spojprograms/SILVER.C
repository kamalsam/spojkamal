/*
kamalsam
*/
#include<stdio.h>
int main()
{
    long n,count;
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
          break;
        else
        {
         count=0;
         while(n!=1)
         {
          n/=2;
          count++;
         }
         printf("%ld\n",count);
        }
    }
    return 0;
}
