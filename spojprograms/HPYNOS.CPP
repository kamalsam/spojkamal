/*
kamalsam
*/
#include<iostream>
using namespace std;
int sqnum(int n)
{
    int rem,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum+=(rem*rem);
        n/=10;
    }
    return sum;
}
int main()
{
    int n,count=0,i,j=1;
    int a[100000];
    cin>>n;
    while(j)
    {
      a[count++]=n;
      n=sqnum(n);
      if(n==1)
      {
          cout<<count<<endl;
          j=0;
      }
      else
      {
          for(i=0;i<count;i++)
           if(a[i]==n)
           {
             cout<<"-1"<<endl;
             j=0;
           }
      }
    }
    return 0;  
}