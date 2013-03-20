/*
kamalsam
*/
#include<stdio.h>
int func(long a,long b,long c,long d)
{
  if(c<=a)
  {
    if(d>=a)
      return 1;
    else 
      return 0;
  }
  else if(c>a)
  {
    if(c<=b)
     return 1;
    else
     return 0;
  }
  else
    return 0;
}
int main()
{
    while(1)
    {
        int m,n;
        scanf("%ld%ld",&n,&m);
        if(n==0&&m==0)
         break;
        else
        {
            long i,j,src,count,des,sta,dur,s[n],f[n],oris[m],orif[m];
            for(i=0;i<n;i++)
            {
                scanf("%ld%ld%ld%ld",&src,&des,&sta,&dur);
                s[i]=sta;
                f[i]=(sta+dur)-1;
            }
            for(i=0;i<m;i++)
            {
                scanf("%ld%ld",&sta,&dur);
                oris[i]=sta;
                orif[i]=(sta+dur)-1;
            }
            for(i=0;i<m;i++)
            {
                count=0;
                for(j=0;j<n;j++)
                {
                   if(func(s[j],f[j],oris[i],orif[i]))
                     count++;
                }
                printf("%ld\n",count);
            }
        }
    }
    return 0;
}