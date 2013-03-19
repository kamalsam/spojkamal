/*
kamalsam
*/
#include<iostream>
using namespace std;
void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
 for(j=i;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  } 
 }
} 
}
int main()
{
int n,i,j,c,d;
cin>>n;
long int e[n];
for(i=0;i<n;i++)
{
e[i]=0;
cin>>c;
int a[c],b[c];
  for(j=0;j<c;j++)
   cin>>a[j];
  sort(a,c);
  for(j=0;j<c;j++)
    cin>>b[j];
  sort(b,c);
for(j=0;j<c;j++)
{
 d=a[j]*b[j];
 e[i]+=d;
}
}
for(i=0;i<n;i++)
 cout<<e[i]<<endl;
return 0;
}