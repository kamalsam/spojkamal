/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
char func(int val,int &carry)
{
   switch(val)
   {
     case 0: carry=0;
       return '0';
     case 1: carry=0; 
        return '1';
     case 2: carry=0; 
        return '2';
     case 3: carry=0;
         return '3';
     case 4: carry=0;
         return '4';
     case 5: carry=0;
         return '5';
     case 6: carry=0;
         return '6';
     case 7: carry=0;
         return '7';
     case 8: carry=0;
         return '8';
     case 9: carry=0;
         return '9';
     default: carry=1;
       return '0';
   }
}
void func1(string &s)
{
  
}
int main()
{
    int t,k,i,pos,pos1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        string s,s2;
        int n,j,r,carry,val,val1,count;
        count=1;
        cin>>s;
        n=s.size();
        if(n%2==0)
          r=(n/2)-1;
        else
          r=n/2;
        carry=0;
        j=0;
        for(j=0;j<n/2;j++)
        {
            val=s[j]-48;
            val1=s[n-j-1]-48;
            if(j<r)
            {
                if(val>val1)
                 count=0;
                val1=val;
            }
            else
            {                                        
              if(val<=val1)
               val++;
              val1=val;                
            }               
            s[j]=func(val,carry);
            s[n-j-1]=func(val1,carry);
            pos=j-1;
            pos1=n-j;
            while(carry==1)
            {               
               if(pos<0)
               {
                 s2='1';
                 val1=1;
                 s[n-1]=func(val1,carry);
                 s2+=s;
                 s=s2;
               }
               else
               {           
               val=s[pos]-48;
               val1=s[pos1]-48;
               val++; 
               val1=val;
               s[pos]=func(val,carry);
               s[pos1]=func(val1,carry);
               pos--;
               pos1++;
               } 
            }
        }
        if((n%2!=0&&count==1)||n==1)
        {
           val=s[n/2]-48;
           val++;                     
           s[n/2]=func(val,carry);
           pos=(n/2)-1;
           pos1=n-j;
            while(carry==1)
            {               
               if(pos<0)
               {
                 s2='1';
                 val1=1;
                 s[n-1]=func(val1,carry);
                 s2+=s;
                 s=s2;
               }
               else
               {           
               val=s[pos]-48;
               val1=s[pos1]-48;
               val++; 
               val1=val;
               s[pos]=func(val,carry);
               s[pos1]=func(val1,carry);
               pos--;
               pos1++;
               } 
            }
        }
        cout<<s<<endl;
    }
    return 0;
}