/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
 long long int n;
 int r=0;
 cin>>n;
 while(n>1&&r==0)
 {
  if(n%2==0)
   n/=2;
  else
   r=1;
 }
 if(r==1) 
  cout<<"NIE"<<endl;
 else
  cout<<"TAK"<<endl;
return 0;
}