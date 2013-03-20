/*
kamalsam
*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int a[25][25];
int binary(long n)
{
    int i=0,rem,ans=0;
    while(n!=0)
    {
        rem=n%10;
        ans+=rem*pow(2,i);
        n/=10;
        i++;
    }
    return ans;
}
int hel,final;
void func(int i,int j,int s,int f,int r,int c,int left,int right,int up,int down,int count,long val)
{
  if(hel<final)
  {
    hel++;
    if(count==5)
    {
        int ans=binary(val);
        if(ans==0)
         cout<<" ";
        else
        {
         char ch=ans+64;
         cout<<ch;
        }
        count=val=0;
    }
    val*=10;
    val+=a[i][j];
   // cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
    count++;
    if(right)
    {
       // cout<<"rig"<<endl;
        if(j==c-1)
         func(i+1,j,s,f,r,c-1,0,0,0,1,count,val);
        else
         func(i,j+1,s,f,r,c,0,1,0,0,count,val);
    }
    else if(left)
    {
      //  cout<<"lef"<<endl;
        if(j==s)
         func(i-1,j,s+1,f,r,c,0,0,1,0,count,val);
        else
         func(i,j-1,s,f,r,c,1,0,0,0,count,val);
         
    }
    else if(up)
    {
       // cout<<"up"<<endl;
        if(i==f)
         func(i,j+1,s,f+1,r,c,0,1,0,0,count,val);
        else
         func(i-1,j,s,f,r,c,0,0,1,0,count,val);
    }
    else if(down)
    {
       // cout<<"down"<<endl;
        if(i==r-1)
         func(i,j-1,s,f,r-1,c,1,0,0,0,count,val);
        else
         func(i+1,j,s,f,r,c,0,0,0,1,count,val);
    }
  }
  else
  {
    if(count==5)
    {
        int ans=binary(val);
        if(ans==0)
         cout<<" ";
        else
        {
         char ch=ans+64;
         cout<<ch;
        }
        count=val=0;
    }
  }
}
int main()
{
    int t,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int r,c,l=0;
        string s;
        cin>>r>>c; 
        cin>>s;
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                if(s[l++]=='0')
                 a[j][k]=0;
                else
                 a[j][k]=1;
            }
        }
        final=s.size();
        cout<<i+1<<" ";
        func(0,0,0,1,r,c,0,1,0,0,0,0);
        cout<<endl;
        hel=final=0;
        int a[25][25];
    }
    return 0;
}