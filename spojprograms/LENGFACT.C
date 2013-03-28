/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,ans;
        scanf("%lld",&n);
        if(n<3)
         printf("1\n");
        else
            printf("%lld\n",(long long int)floor((log(2*acos(-1)*n)/2+n*(log(n)-1))/log(10))+1);
    }
    return 0;
}

