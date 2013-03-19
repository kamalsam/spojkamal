/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        if(k==1)
         printf("Male\n");
        else if(k==2)
         printf("Female\n");
        else
        {
            int count=0;
            k--;
            while(k>1)
            {
               if(k%2!=0)
                count++;
                k/=2;
            }
            if(count%2!=0)
             printf("Male\n");
            else 
             printf("Female\n");
        }
    }
    return 0;
}