/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
int a[3];
while(1)
{
cin>>a[0]>>a[1]>>a[2];
if(a[0]==0&&a[1]==0&&a[2]==0)
 break;
else
{
 if(a[2]-a[1]==a[1]-a[0])
  cout<<"AP"<<" "<<(a[2]+(a[1]-a[0]))<<endl;
 else
  cout<<"GP"<<" "<<(a[2]*(a[1]/a[0]))<<endl;
}
}
return 0;
}
