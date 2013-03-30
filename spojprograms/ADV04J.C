/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,ans=0,j=1;
        scanf("%d",&n);
        while(ans<n)
         ans=pow(2,j++);
        printf("%d\n",j);
    }
    return 0;
}