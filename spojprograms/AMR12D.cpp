/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
string rev(string s)
{
    int i,n;
    string s1;
    n=s.size()-1;
    for(i=n;i>=0;i--)
     s1+=s[i];
    return s1;
}
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int r=0,count=0,j,n,k;
        string s,s1[200],s2;
        cin>>s;
        n=s.size();
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j;k++)
               s1[r++]=s.substr(k,j+1); 
        }
        for(j=0;j<r;j++)
        {
            s2=rev(s1[j]);             
            for(k=0;k<r;k++)
               if(s1[k]==s2)
               {
                 count++;
                 break;
               }
        }
        if(count==r)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
    return 0;
}