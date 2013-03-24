/*
kamalsam
*/
#include<stdio.h>
int main()
{
    long long int m,n,i,row;
    int rem;
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&n);
        if(n==1)
         printf("poor conductor\n");
        else
        {
            n-=1;
            rem=n%5;
            if(rem==0)
                row=n/5;
            else
                row=(n/5)+1;
            printf("%lld",row);
            if(row%2==0)
            {
              switch(rem)
    {
        case 0:
         printf(" W L\n");
         break;
        case 1:
         printf(" W R\n");
         break;
        case 2:
         printf(" M R\n");
         break;
        case 3:
         printf(" A R\n");
         break;
        case 4:
         printf(" A L\n");
         break;
    }
            }    
            else
            {
              switch(rem)
    {
        case 0:
         printf(" W R\n");
         break;
        case 1:
         printf(" W L\n");
         break;
        case 2:
         printf(" A L\n");
         break;
        case 3:
         printf(" A R\n");
         break;
        case 4:
         printf(" M R\n");
         break;
    }
            }
        }
    }
    return 0;
}
