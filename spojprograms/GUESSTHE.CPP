/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
        int a[30],b[30];
        char s[30];
        scanf("%s",s);
        int i,j,r,k,n,count,count1;
        int ans=1;
        if(strcmp(s,"*")==0)
         break;
        else
        {
            count=count1=0;
            n=strlen(s);
            for(i=0;i<n;i++)
            { 
             if(s[i]=='Y')
              a[i]=b[i]=i+1;
             else
              a[i]=b[i]=0;
            } 
            for(i=0;i<n;i++)
            {   
                r=a[i];          
                if(r!=0&&r!=1)
                {
                    for(j=i;j<n;j++)
                    {  
                        if(a[j]%r==0)
                        {
                          
                          a[j]/=r;
                          count=1;
                        }
                    }
                   if(count==1)
                     ans*=r;
                }  
                count=0;
            }
            for(i=0;i<n;i++)
            {
              if(b[i]==0)
               if((ans%(i+1)==0))
                 count1=1;
            }            
        }
        if(count1==1)
             printf("-1\n");
        else
             printf("%d\n",ans);
    }
    return 0;
}