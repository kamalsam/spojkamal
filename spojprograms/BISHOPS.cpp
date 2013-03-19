/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
       if(s.compare("1")==0)
        cout<<s<<endl;
       else
       {
        int q,n=s.size(),i,l,carry=0;
        char ch;
        if(s[n-1]=='0')
        {
            i=n-1;
            int borrow=1;
            while(borrow)
            {
                if(s[i]=='0')
                {
                    l=9;
                    ch=l+48;
                    s[i]=ch;
                    i--;
                }
                else
                {
                    l=s[i]-48;
                    l-=1;
                    ch=l+48;
                    s[i]=ch;
                    borrow=0;
                }
            }
        }
        else
        {
            l=s[n-1]-48;
            l-=1;
            ch=l+48;
            s[n-1]=ch;
        }
        for(i=n-1;i>=0;i--)
        {
            l=s[i]-48;
            l*=2;
            q=l%10;
            q+=carry;
            ch=q+48;
            s[i]=ch;
            if(l/10)
             carry=1;
            else 
             carry=0;
        }
        if(carry==1)
         cout<<l/10;
       cout<<s<<endl;
      }
    }
    return 0;
}