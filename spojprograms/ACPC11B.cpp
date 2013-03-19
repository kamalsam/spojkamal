/*
kamalsam
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,n,m,r,l,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
     s=0;
     cin>>m;
     long int a[m];
     for(j=0;j<m;j++)
      cin>>a[j];
     cin>>r;
     long int b[r],mini;
     long int min[m*r+10];
     for(j=0;j<r;j++)
      cin>>b[j];
     for(j=0;j<m;j++)
     {
         for(l=0;l<r;l++)
         {
             min[s++]=labs(a[j]-b[l]);
         }
     }
     mini=1000000;
     for(j=0;j<s;j++)
     {
         if(min[j]<mini)
          mini=min[j];
     }
     cout<<mini<<endl;
    }
    return 0;
}