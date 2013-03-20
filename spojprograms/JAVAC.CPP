/*
kamalsam
*/
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
 string a,s;
 int i,r,l;
 s='_';
 while(cin>>a)
 {
   r=l=0;
   for(i=0;i<a.size();i++)
   {      
     if(a[i]=='_')
     {
      if(isalpha(a[i+1])&&isalpha(a[i-1]))
      {
       if(isupper(a[i+1]))
       {
         l++;
         r++;
       } 
        a.erase(i,1);
        a[i]=toupper(a[i]);
        r++;
      }
      else 
      { 
         l++;
         r++;
      }
     } 
     else if(isupper(a[i]))
     {
      if(isalpha(a[i-1]))
      {
       a[i]=tolower(a[i]);
       a.insert(i,s);
       l++;
      }
      else
      {
        l++;
        r++;
      }
     }
    } 
   if(r>=1&&l>=1)
      cout<<"Error!"<<endl;
   else
      cout<<a<<endl;
 }
return 0;
}