/*
kamalsam
*/
#include<string.h>
#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
  int c;
  while(b!=0)
  {
    c=a%b;
    a=b;
    b=c;
  }
  return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,k=0,pos,ans,sum=0,n,ans1=1,final,result;
        char s[15];
        scanf("%s",s);
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                pos=i+1;
                k=1;
            }
            else
            {
                ans=s[i]-48;
                sum*=10;
                sum+=ans;
            }
        }
        if(k)
        {
            pos=n-pos;
            ans1=pow(10,pos);
        }
        final=gcd(sum,ans1);
        result=ans1/final;
        printf("%d\n",result);
    }
    return 0;
}