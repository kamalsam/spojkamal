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
    while(t--)
    {
        int x,o;
        x=o=0;
        string s0,s1,s2;
        cin>>s0>>s1>>s2;        
        for(i=0;i<3;i++)
        {
           if(s0[i]=='X')
            x++;
           if(s1[i]=='X')
            x++;
           if(s2[i]=='X')
            x++;
           if(s0[i]=='O')
            o++;
           if(s1[i]=='O')
            o++;
           if(s2[i]=='O')
            o++;
        }
        int count=0,count1=0;
        if(s0[0]=='O'&&s0[1]=='O'&&s0[2]=='O')
         count=1;
        if(s1[0]=='O'&&s1[1]=='O'&&s1[2]=='O')
         count=1;
        if(s2[0]=='O'&&s2[1]=='O'&&s2[2]=='O')
         count=1;
        if(s0[0]=='O'&&s1[0]=='O'&&s2[0]=='O')
         count=1;
        if(s0[1]=='O'&&s1[1]=='O'&&s2[1]=='O')
         count=1;
        if(s0[2]=='O'&&s1[2]=='O'&&s2[2]=='O')
         count=1;
        if(s0[0]=='O'&&s1[1]=='O'&&s2[2]=='O')
         count=1;
        if(s0[2]=='O'&&s1[1]=='O'&&s2[0]=='O')
         count=1;
        if(s0[0]=='X'&&s0[1]=='X'&&s0[2]=='X')
         count1=1;
        if(s1[0]=='X'&&s1[1]=='X'&&s1[2]=='X')
         count1=1;
        if(s2[0]=='X'&&s2[1]=='X'&&s2[2]=='X')
         count1=1;
        if(s0[0]=='X'&&s1[0]=='X'&&s2[0]=='X')
         count1=1;
        if(s0[1]=='X'&&s1[1]=='X'&&s2[1]=='X')
         count1=1;
        if(s0[2]=='X'&&s1[2]=='X'&&s2[2]=='X')
         count1=1;
        if(s0[0]=='X'&&s1[1]=='X'&&s2[2]=='X')
         count1=1;
        if(s0[2]=='X'&&s1[1]=='X'&&s2[0]=='X')
         count1=1;        
        if(count==1&&count1==1)
         cout<<"no"<<endl;
        else if(count==1&&x!=o)
         cout<<"no"<<endl;
        else if(count1==1&&x<=o)
         cout<<"no"<<endl;
        else
        {  
         if((x>=o)&&((x-o)<=1))
          cout<<"yes"<<endl;
         else
          cout<<"no"<<endl;        
        }
    }
    return 0;
}