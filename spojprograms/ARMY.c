/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int i,n,g,val,m;
    int j,max,max1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&g,&m);
        max=max1=0;
        for(j=0;j<g;j++)
        {
         scanf("%d",&val);
         if(val>max)
          max=val;
        }
        for(j=0;j<m;j++)
        {
          scanf("%d",&val);
          if(val>max1)
           max1=val;
        }
        if(max>=max1)
         printf("Godzilla\n");
        else
         printf("MechaGodzilla\n");
    }
    return 0;
}