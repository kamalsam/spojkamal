/*
kamalsam
*/
#include<iostream>
using namespace std;
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
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,ans,ans1;
        cin>>a>>b;
        if(a<0&&b<0) 
        {
         a*=-1;
         b*=-1;
         if(a>b)
          ans1=a-b;
         else
          ans1=b-a;
        }
        if(a>b)
         ans1=a-b;
        else
         ans1=b-a;
        if(a<0)
          a*=-1;
        else if(b<0)
          b*=-1;
        ans=ans1/gcd(a,b);
        cout<<ans<<endl;
    }
    return 0;
}