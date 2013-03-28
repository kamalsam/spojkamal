/*
kamalsam
*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int t;
    string s,s1;
    cin>>t;
    getline(cin,s);
    while(t--)
    {
        int count=0,best=0,len,prev=0;
  	getline(cin,s);
  	stringstream str1(s);
  	while(str1>>s1)
  	{
  	    len=s1.size();
  	    if(prev==len)
  	     count++;
  	    else
  	    {
  	        if(count>best)
  	         best=count;
  	        count=1;
  	        prev=len;
  	    }
  	}
  	if(count>best)
  	 best=count;
        cout<<best<<endl;	
    }
return 0;
}