/*
kamalsam
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int func(int n)
{
  if(n<=4)
   return 1;
  else if(n==5)
   return 2;
  else if(n==6)
   return 3;
  else if(n==7)
   return 5;
  else
   return 11;
}
int main()
{
    int n,i,j;
    cin>>n;
    string s,s1;
    map<string,int> m;
    for(i=0;i<=n;i++)
    {
        getline(cin,s);        
        int len=s.size();
        for(j=0;j<len;j++)
        {
            if(s[j]!=' ')
             s1+=s[j];
            else
            {                
                if(m[s1])
                 m[s1]=200;
                else
                 m[s1]=i;
                s1.clear();
            }
        }
        if(m[s1])
          m[s1]=200;
        else
          m[s1]=i;
        s1.clear();
    }
    int ans[1000]={0};
    map<string,int> :: iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second!=200)
        {
            s1=itr->first;
            ans[itr->second]+=func(s1.size());
        }
    }
    int max=0;
    for(i=1;i<=n;i++)
    {
      if(ans[i]>max)
        max=ans[i];
    }
    cout<<max<<endl;
    return 0;
}