/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    long long i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long j,sum,m;
        cin>>m;
        long long int a[m];
        sum=0;
        for(j=0;j<m;j++)
            cin>>a[j];
        for(j=0;j<m;j++)
            sum=(sum+a[j])%m;
        if(sum%m==0)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
    return 0;
}