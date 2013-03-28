/*
kamalsam
*/
#include<iostream>
using namespace std;main()
{int t,i,n,j;
cin>>t;while(t--){cin>>n;int a[101][101]={0},r=0;
for(i=1;i<=n;i++)for(j=1;j<=i;j++){cin>>a[i][j];a[i][j]+=max(a[i-1][j],a[i-1][j-1]);if(a[i][j]>r)r=a[i][j];}cout<<r<<endl;}}
