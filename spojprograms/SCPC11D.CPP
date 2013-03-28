/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d;
 long long int e,f,g,h,i;
 while(1)
 {
  e=f=g=h=0;
  cin>>a>>b>>c;
  if(a==0&&b==0&&c==0)
    break;
  else
  {
   d=((a>b)?((a>c)?a:c):((b>c)?b:c));
   h=d*d;
   if(a!=d)
    e=a*a;
   if(b!=d)
    f=b*b;
   if(c!=d)
    g=c*c;
   i=e+f+g;
   if(i==h)
    cout<<"right"<<endl;
   else
    cout<<"wrong"<<endl;
  }
 }
return 0;
}
