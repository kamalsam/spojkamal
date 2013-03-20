/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,count=0;
        cin>>n;
        string s;
        for(j=0;j<n;j++)
        {
            cin>>s;
            if(s=="lxh")
             count++;
        }
        if(count%2==0)
         cout<<"hhb"<<endl;
        else
         cout<<"lxh"<<endl;
    }
    return 0;
}