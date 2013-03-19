/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
long long int a,j,count,b;
long int n,i;
cin>>n;
long long int c[n]; 
for(i=0;i<n;i++)
{
  cin>>a;
  b=192;
  for(j=1;j<a;j++)
    b+=250;
  c[i]=b;
}
for(i=0;i<n;i++)
 cout<<c[i]<<endl;
return 0;
}