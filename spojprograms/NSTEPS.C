/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
int n,i,a,b;
cin>>n;
int c[n];
for(i=0;i<n;i++)
{
 cin>>a>>b;
 if(a==0&&b==0)
  c[i]=-1;
 else
 {
 if(((a%2==0)&&(b%2==0))||((a%2!=0)&&(b%2!=0)))
 {
  if(a%2==0)
  {
   if(b<=a)
   {
    if(b==a||b==(a-2))
     c[i]=a+b;
    else
     c[i]=0;
   }
   else
    c[i]=0;
  } 
  else
  {
   if(b<=a)
   {
    if(b==a||b==(a-2))
     c[i]=(a+b)-1;
    else
     c[i]=0;
   }
  else
   c[i]=0;       
  }
 }
 else
  c[i]=0;
 }
}
for(i=0;i<n;i++)
{
 if(c[i]==0)
  cout<<"No Number"<<endl;
 else if(c[i]==-1)
  cout<<c[i]+1<<endl;
 else
  cout<<c[i]<<endl;
}
return 0;
}  