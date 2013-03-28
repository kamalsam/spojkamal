/*
kamalsam
*/
#include<iostream>
using namespace std;
int func(char s,int &neg,int &valid,int &activate,int &x)
{
    int val;
    switch(s)
    {
        case 'x':
         x++;
        case '*':
        case '=': 
         valid=0;
         return 0;
        case '+':
         neg=0;
         valid=0;
         activate=1;
         return 0;
        case '-':
         neg=1;
         valid=0;
         activate=1;
         return 0;
        default:
         valid=1;
         val=s-48;
         activate=0;
         return val;
    }
}
int main()
{
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        string s;
        int x;
        int n,h,a[5]={0},ans,neg=0,hai=0,valid=1,sum=0,k=1,act=0;
        long long req;
        cin>>s;
        n=s.size();
        for(j=0;j<10;j++)
        {
            if(s[j]!='*'&&s[j]!='x')
            {
                ans=s[j]-48;
                sum*=10;
                sum+=ans;
            }
            else              
             break;
        }
        h=j;
        if(sum==0)
         a[0]=1;
        else
         a[0]=sum;
        neg=sum=valid=0;
        x=0;
        for(j=h;j<n;j++)
        {
            ans=func(s[j],neg,valid,act,x);
            if(valid==1)
            {
                sum*=10;
                sum+=ans;
                hai=1;
            }
            else if(hai==1) 
            {
                hai=0;
                if(x<3&&s[j]=='=')
                 k++;            
                if(k==0&&sum==0)
                 a[k++]=1;
                else if(neg==1)
                 a[k++]=-sum;
                else 
                 a[k++]=sum;
                sum=0;                
                if(k==3)
                 break;
            }
            else if(act==1)
            {
               if(s[j]!='-'&&s[j]!='+')
               { 
                if(neg==1) 
                 a[k++]=-1;
                else
                 a[k++]=1;
                act=0;
               }
            }
        }        
        req=(a[1]*a[1])-(4*a[0]*a[2]);        
        if(req==0)
          cout<<"Equal roots."<<endl;
        else if(req<0)
          cout<<"Imaginary roots."<<endl;
        else
          cout<<"Distinct real roots."<<endl;
    }
    return 0;
}