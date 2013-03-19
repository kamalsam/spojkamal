/*
kamalsam
*/
#include<stdio.h>
void func(int a[])
{
    int i,j,c,k,r,v[34000];
    k=2;
    for(i=0;i<34000;i++)
     v[i]=k++;
    r=1;
    for(i=0;i<34000;i++)
    {
        if(v[i]!=0)
        {
            k=v[i];
            a[r++]=k;
        c=0;
        for(j=i+1;j<34000;j++)
        {
            if(v[j]!=0)
             c++;
            if(c==k)
            {
             v[j]=0;
             c=0;
            }
        }
       }
    }
}
int main()
{
    int n,a[3100];
    func(a);
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
         break;
        else 
         printf("%d\n",a[n]);
    }
    return 0;
}
