/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j,a,b,c;
    int val,val1,val2,val3;
    string s[6];
    cin>>n;
    for(j=0;j<n;j++)
    {
        a=b=c=0;
        val1=val2=val3=0;
        for(i=1;i<=5;i++)
         cin>>s[i];
        i=0;
        while(i<s[1].size())
        {
            val=s[1][i]-48;
            if(val<=65)
            {
                val1*=10;
                val1+=val;
            }
            else
            {
             i=s[1].size();
             a=1;
             val1=0;
            }
            i++;
        }
        i=0;
        while(i<s[3].size())
        {
            val=s[3][i]-48;
            if(val<=65)
            {
                val2*=10;
                val2+=val;
            }
            else
            {
             i=s[3].size();
             b=1;
             val2=0;
            }
            i++;
        }
        i=0;
        while(i<s[5].size())
        {
            val=s[5][i]-48;
            if(val<=65)
            {
                val3*=10;
                val3+=val;
            }
            else
            {
             i=s[5].size();
             c=1;
             val3=0;
            }
            i++;
        }
        if(a!=1&&b!=1)
        {
            val3=val1+val2;
            cout<<val1<<" + "<<val2<<" = "<<val3<<endl;
        }
        else if(a!=1&&c!=1)
        {
            val2=val3-val1;
            cout<<val1<<" + "<<val2<<" = "<<val3<<endl;
        }
        else
        {
            val1=val3-val2;
            cout<<val1<<" + "<<val2<<" = "<<val3<<endl;
        }
    }
    return 0;
}
