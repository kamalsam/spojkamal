/*
kamalsam
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i;
    long int m,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        long long int a[m],val,ans;
        for(j=0;j<m;j++)
            cin>>a[j];
        val=ans=0;
        for(j=0;j<m;j++)
        {
            val+=a[j];
            if(val<0)
            {
             ans+=labs(val);
             val=0;
            }
        }
        cout<<"Scenario #"<<i+1<<": "<<ans+1<<endl;
    }
    return 0;
}