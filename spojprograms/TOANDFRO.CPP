/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
string reverse(string s)
{
 int i;
 string l;
 for(i=s.length()-1;i>=0;i--)
  l+=s[i];
 return l;
}
int main()
{
    int i,j,n,m;
    string s,s1[200],s2;
    while(1)
    {
        cin>>n;
        if(n==0)
         break;
        else
        {
            cin>>s;
            m=s.length();
            j=0;
            for(i=1;i<=(m/n);i++)
            {
                s1[i]=s.substr(j,n);
                j+=n;
            }
            for(i=1;i<=(m/n);i++)
            {
                if(i%2==0)
                 s1[i]=reverse(s1[i]);
            }
            for(i=0;i<n;i++)
            {
                for(j=1;j<=(m/n);j++)
                {
                 s2+=s1[j][i];   
                }
            }
            cout<<s2<<endl;
            for(i=1;i<=(m/n);i++)
             s1[i].clear();
            s2.clear();
            s.clear();
        }
    }
    return 0;
}