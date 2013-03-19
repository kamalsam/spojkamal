/*
kamalsam
*/
#include<iostream>
using namespace std;
void func(long long int a[])
{
 int i;
 a[1]=5;
 for(i=2;i<=1000;i++)
 {
  a[i]=a[i-1]+4+(3*(i-1));
 }
}
int main()
{
 int n,i;
 long long int a[1002],s;
 func(a);
 while(1)
 {
  cin>>n;
  if(n==0)
   break;
  else
  {
   for(i=1;i<=n;i++)
    s=a[i];
   cout<<s<<endl;
  }
 }
return 0;
} 