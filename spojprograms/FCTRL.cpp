/*
kamalsam
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long int a,f,q;
int i;
long int j,m;
cin>>m;
for(j=0;j<m;j++)
{
  cin>>a;
  i=q=1;
  f=0;
  while(q!=0)
  {
    q=a/(pow(5,i));
    f+=q;
    i++;
  }
cout<<f<<endl;
}
return 0;
}