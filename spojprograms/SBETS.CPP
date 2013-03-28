/*
kamalsam
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int g1,g2;
    string t1,t2,ans;
    vector<string> v;
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {  
       int count[40]={0}; 
        for(k=0;k<16;k++)
        {
          int cnt=0;
        cin>>t1>>t2>>g1>>g2;
        if(g1>g2)
        {
            for(j=0;j<v.size();j++)
            {
                if(v[j]==t1)
                {
                 count[j]++;
                 cnt=1;
                }
            }
            if(cnt!=1)
            {
                v.push_back(t1);
                count[v.size()-1]++;
            }
        }
        else
        {
            for(j=0;j<v.size();j++)
            {
                if(v[j]==t2)
                {
                 count[j]++;
                 cnt=1;
                }
            }
            if(cnt!=1)
            {
                v.push_back(t2);
                count[v.size()-1]++;
            }
        }
        }
        int max=0,pos;
        for(j=0;j<v.size();j++)
        {
            if(count[j]>max)
            {
             max=count[j];
             pos=j;
            }
        }
        for(j=0;j<=pos;j++)
         ans=v[j];
        cout<<ans<<endl;
    }
    return 0;
}