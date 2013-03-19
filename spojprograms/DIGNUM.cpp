/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c,d,e;
    while(getline(cin,a))
    {
        getline(cin,b),getline(cin,c);
        int i,n,count;
        n=c.size();       
        for(i=0;i<n;i+=3)
        {  
               if(b[i+2]=='|'&&c[i+2]=='|')
                count=1;
               if(a[i+1]=='_'&&b[i+2]=='|'&&c[i+2]=='|')
                count=7;
               if(b[i]=='|'&&b[i+2]=='|'&&b[i+1]=='_'&&c[i+2]=='|')
                count=4;
               if(a[i+1]=='_'&&b[i+2]=='|'&&b[i+1]=='_'&&c[i]=='|'&&c[i+1]=='_')
                count=2;
               if(a[i+1]=='_'&&b[i]=='|'&&b[i+1]=='_'&&c[i+2]=='|'&&c[i+1]=='_')
                count=5;
               if(a[i+1]=='_'&&b[i]=='|'&&b[i+2]=='|'&&b[i+1]=='_'&&c[i+2]=='|')
                count=9;    
               if(a[i+1]=='_'&&b[i+2]=='|'&&b[i+1]=='_'&&c[i+2]=='|'&&c[i+1]=='_')
                count=3;              
               if(a[i+1]=='_'&&b[i]=='|'&&b[i+2]=='|'&&c[i]=='|'&&c[i+2]=='|'&&c[i+1]=='_')
                count=0;                        
               if(a[i+1]=='_'&&b[i]=='|'&&b[i+1]=='_'&&c[i]=='|'&&c[i+2]=='|'&&c[i+1]=='_')
                count=6;                             
               if(a[i+1]=='_'&&b[i]=='|'&&b[i+2]=='|'&&b[i+1]=='_'&&c[i]=='|'&&c[i+2]=='|'&&c[i+1]=='_')
                count=8;               
               cout<<count;
        }
        cout<<endl;
    }
    return 0;
}