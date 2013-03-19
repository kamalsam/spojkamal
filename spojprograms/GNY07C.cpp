/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
string binary(int n)
{
    int q[5],i=0,j;
    string s;
    while(n!=0)
    {
        q[i++]=n%2;
        n/=2;
    }
    for(j=i-1;j>=0;j--)
    {
      char ch=q[j]+48;
      s+=ch;
    }
    return s;
}
char b[25][25];
int hel,final;
void func(int i,int j,int s,int f,int r,int c,int left,int right,int up,int down,string str)
{
  if(hel<final)
  {
    hel++;
    b[i][j]=str[hel-1];
    if(right)
    {
        if(j==c-1)
         func(i+1,j,s,f,r,c-1,0,0,0,1,str);
        else
         func(i,j+1,s,f,r,c,0,1,0,0,str);
    }
    else if(left)
    {
        if(j==s)
         func(i-1,j,s+1,f,r,c,0,0,1,0,str);
        else
         func(i,j-1,s,f,r,c,1,0,0,0,str);
         
    }
    else if(up)
    {
        if(i==f)
         func(i,j+1,s,f+1,r,c,0,1,0,0,str);
        else
         func(i-1,j,s,f,r,c,0,0,1,0,str);
    }
    else if(down)
    {
        if(i==r-1)
         func(i,j-1,s,f,r-1,c,1,0,0,0,str);
        else
         func(i+1,j,s,f,r,c,0,0,0,1,str);
    }
  }
}
int main()
{
    int t,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int r,c;
        cin>>r>>c;
        string s,s1,q;
        getline(cin,s);        
        int n=s.size();
        int a[n+1];        
        for(j=1;j<n;j++)
        {
            if(s[j]==' ')
             a[j]=0;
            else
             a[j]=s[j]-64;
        }
        for(j=1;j<n;j++)
        {
            int count,len;
            if(a[j]!=0)
            {
                q=binary(a[j]);                
                count=q.size();
                len=5-count;
                for(k=0;k<len;k++)
                 s1+='0';
                s1+=q;
            }
            else
                s1+="00000";
        }
        int ans=(r*c)-s1.size();
        for(j=0;j<ans;j++)
          s1+='0';
        final=s1.size();
        func(0,0,0,1,r,c,0,1,0,0,s1);
        cout<<i+1<<" ";
        for(j=0;j<r;j++)
         for(k=0;k<c;k++)
          cout<<b[j][k];
        cout<<endl;
        hel=final=0;
        char b[25][25];
    }
    return 0;
}