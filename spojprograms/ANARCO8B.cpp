/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
char func4(int r)
{
    switch(r)
    {
        case 0:
         return '0';
        case 1:
         return '1';
        case 2:
         return '2';
        case 3:
         return '3';
        case 4:
         return '4';
        case 5:
         return '5';
        case 6:
         return '6';
        case 7:
         return '7';
        case 8:
         return '8';
        case 9:
         return '9';
    }
}
int func3(string s)
{
     if(s=="063")
      return 0;
     else if(s=="010")
      return 1;   
     else if(s=="093")
      return 2;   
     else if(s=="079")
      return 3;   
     else if(s=="106")
      return 4;   
     else if(s=="103")
      return 5;   
     else if(s=="119")
      return 6;   
     else if(s=="011")
      return 7;   
     else if(s=="127")
      return 8;
     else if(s=="107")
      return 9;      
}
long long func(string s)
{
    string s1[20],s2;
    int n,i,r=0,sum=0,l,j;
    n=s.size();
    for(i=0;i<n;i+=3)
    {
        j=i;
        while(j<i+3)
            s1[r]+=s[j++];
        r++;
    }
    for(j=0;j<r;j++)
    {
      l=func3(s1[j]);
      sum*=10;
      sum+=l;
    }
    return sum;
}
void func2(long long n)
{
    string s,q,s0,s1,s2,s3,s4;
    string s5,s6,s7,s8,s9,ans,m;
    int i;
    char rem;
    s0="063";
    s1="010";
    s2="093";
    s3="079";
    s4="106";
    s5="103";
    s6="119";
    s7="011";
    s8="127";
    s9="107";
    while(n!=0)
    {
        rem=n%10;
        m+=func4(rem);
        n/=10;
    }
    i=m.size()-1;
    while(i>=0)
    {
        rem=m[i];
        if(rem=='0')
         s=s0;
        else if(rem=='1')
         s=s1;
        else if(rem=='2')
         s=s2;
        else if(rem=='3')
         s=s3;
        else if(rem=='4')
         s=s4;
        else if(rem=='5')
         s=s5;
        else if(rem=='6')
         s=s6;
        else if(rem=='7')
         s=s7;
        else if(rem=='8')
         s=s8;
        else if(rem=='9')
         s=s9;
        ans+=s;
        i--;
    }
    cout<<ans<<endl;
}
int main()
{
    while(1)
    {
        long long m,m1,m2;
        string s,r,s1[4];
        int n,i,l;
        r="BYE";
        l=0;
        cin>>s;
        if(s.compare(r)==0)
         break;
        else
        {
            n=s.size();
            for(i=0;i<n;i++)
            {
                if(s[i]!='+'&&s[i]!='=')
                {
                   s1[l]+=s[i];
                } 
                else
                 l++;
            }
            m=func(s1[0]);
            m1=func(s1[1]);
            m2=m+m1;  
            cout<<s;         
            func2(m2);
        }
    }
    return 0;
}