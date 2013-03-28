/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int count=0;
int a[16][16],n;
void func(int i,int j)
{
    if(i<n&&j<n)
    {
        if(i==n-1&&j==n-1)
          count++;
        else
        {
          if(a[i][j]!=0)
          {
            func(i+a[i][j],j);
            func(i,j+a[i][j]);
          }
        }
    }
}
int main()
{
    int i,j,m;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
      cin>>s[i];
    for(i=0;i<n;i++)
    {
        m=s[i].size();
        for(j=0;j<m;j++)
         a[i][j]=s[i][j]-48;
    }
    func(0,0);
    cout<<count;
    return 0;
}
