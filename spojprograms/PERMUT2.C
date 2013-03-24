/*
kamalsam
*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
         break;
        else
        {
            int a[n+1],b[n+1],flag=0,i;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a[i]);
                b[a[i]]=i;
            }
            for(i=1;i<=n;i++)
            {
                if(a[i]!=b[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
             printf("ambiguous\n");
            else
             printf("not ambiguous\n");
        }
    }
    return 0;
}
