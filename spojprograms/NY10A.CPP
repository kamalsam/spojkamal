/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
void func(string s,int a[])
{
        if(s=="TTT")
         a[0]++;
        else if(s=="TTH")
         a[1]++;
        else if(s=="THT")
         a[2]++;
        else if(s=="THH")
         a[3]++;
        else if(s=="HTT")
         a[4]++;
        else if(s=="HTH")
         a[5]++;
        else if(s=="HHT")
         a[6]++;
        else if(s=="HHH")
         a[7]++;
}
int main()
{
    int n,i,j,a[8],id;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s,s1;
        cin>>id;
        a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=a[7]=0;
        cin>>s;
        for(j=0;j<38;j++)
        {
            s1=s.substr(j,3);
            func(s1,a);
        }
        cout<<id;
        for(j=0;j<8;j++)
         cout<<" "<<a[j];
        cout<<endl;
    }
    return 0;
}