/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,r=0,q=0,j,count=0,pos[200000];
        long m,sum=0,max[200000];
        scanf("%d%ld",&a,&m);
        int arr[a],k=0;
        for(j=0;j<a;j++)
         scanf("%d",&arr[j]);
        for(j=0;j<a;j++)
        {
            sum+=arr[j];
            if(sum>m)
            {
                max[r++]=sum-arr[j];
                pos[q++]=j-k;
            }
            while(sum>m)
            { 
                sum-=arr[k++]; 
                count=1; 
            }
            if(count==1)
            { 
                max[r++]=sum;
                pos[q++]=j-k;
                count=0; 
            }
        }
        if(sum<=m)
        {
         max[r++]=sum;
         pos[q++]=j-k;
        }
        int big=0;
        long want=0;
        for(j=0;j<q;j++)
        {
          if(pos[j]>big)
          {
            big=pos[j];
            want=max[j];
          }
          else if(pos[j]==big)
          {
            if(max[j]<want) 
             want=max[j];
          }  
        }
        printf("%ld %d\n",want,big);
    }
    return 0;
}