/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{int t,k;long a,b,v;cin>>t;while(t--){cin>>k>>a>>b;while(a!=b){if(a>b){v=a;a=(a/k);if(v%k>1)a++;}else{v=b;b=(b/k);if(v%k>1)b++;}}cout<<a<<endl;}return 0;}