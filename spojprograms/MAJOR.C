#include<stdio.h>
int main()
{
    int t,i,j,count,val;
    long n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%ld",&n);
        int a[1001]={0},b[1001]={0};
        for(j=0;j<n;j++)
        {
            scanf("%d",&val);
            if(val>=0)
            {
             a[val]++;
             if(a[val]>=(n/2)+1)
             {
              printf("YES %d\n",val);
              a[val]=0;
              count=1;
             }
            }
            else
            {
             b[-val]++;
             if(b[-val]>=(n/2)+1)
             {
              printf("YES %d\n",val);
              b[-val]=0;
              count=1;
             }  
            }
        }
        if(count!=1)
         printf("NO\n");
    }
    return 0;
}
