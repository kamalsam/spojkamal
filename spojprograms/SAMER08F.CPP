/*
kamalsam
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
int sum=0,c;
int a[101],i,j=0,n;
for(i=1;i<=100;i++)
{
 sum+=(i*i);
 a[i]=sum;
}
cin>>c;
while(c!=0)
{
 v.push_back(c);
 cin>>c;
}
for(i=0;i<v.size();i++)
 cout<<a[v[i]]<<endl; 
return 0;
}