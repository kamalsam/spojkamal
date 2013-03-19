/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
 long long int n,k;
 int r,j; 
 while(1)
 {
  k=j=1;
  r=0;
  cin>>n;
  if(n==-1)
   break;
  else
  {
   while(k<=n)
   {
    if(k==n)
     r=1;
    k+=(6*j);
    j++;
   }
  if(r==1)
   cout<<"Y"<<endl;
  else
   cout<<"N"<<endl;
  }
 }
return 0;
}