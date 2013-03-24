/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
         break;
        else
        {
            long l=pow(n,n-2);
            printf("Case %d, N = %d, # of different labelings = %ld\n",r++,n,l);
        }
    }
    return 0;
}
