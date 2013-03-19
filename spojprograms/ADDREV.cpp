/*
kamalsam
*/
#include<iostream>
using namespace std;
int rev(int a)
{
 int s=0,r;
 while(a!=0)
 {
  r=a%10;
  s=s*10;
  s=s+r;
  a=a/10;
 }
 return s;
}
int main()
{
 int n,i;
 int a,b,s,r,c;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a>>b;
  s=rev(a);
  r=rev(b);
  c=s+r;
  cout<<rev(c)<<endl;
 }
return 0;
}