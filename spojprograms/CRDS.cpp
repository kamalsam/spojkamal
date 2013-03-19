/*
kamalsam
*/
#include<iostream>
using namespace std;
long long int a[1000004];
void func()
{
    long int i,ans;
    a[0]=0;
    for(i=1;i<=1000000;i++)
     a[i]=(a[i-1]+(2*i)+(i-1))%1000007;
}
int main()
{
    int n,i;
    long int r;
    cin>>n;
    func();
    for(i=0;i<n;i++)
    {
        cin>>r;
        cout<<a[r]<<endl;
    }
return 0;
}