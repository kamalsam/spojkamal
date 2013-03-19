/*
kamalsam
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char a[5];
 int i,n,r=0;
 int pizza=0,half=0,quarter=0,tquarter=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a;
  if(strcmp(a,"3/4")==0)
   tquarter++;
  else if(strcmp(a,"1/2")==0)
   half++;
  else if(strcmp(a,"1/4")==0)
   quarter++;
 }
 quarter-=tquarter;
 pizza+=tquarter;
 if(half%2==0)
  pizza+=(half/2);
 else
 {
  pizza+=(half/2);
  r=1;
 }
 if(r==1)
 {
  if(quarter<=2)
  {
   pizza++;
   quarter=0;
  }
  else
  {
   pizza++;
   quarter-=2; 
  } 
 }   
 if(quarter>0)
 {
  if(quarter%4==0)
  {
   pizza+=(quarter/4);
   quarter=0;
  }
  else if(quarter>4)
  { 
   pizza+=(quarter/4);
   quarter-=((quarter/4)*4);
  }
  else
  {
   pizza++;
   quarter=0;
  }
 }
 if(quarter>0)
  pizza++; 
 pizza++;
 cout<<pizza<<endl;
 return 0;
}