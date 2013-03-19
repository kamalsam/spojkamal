/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    long n,j,sum,pos,row,rem;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n;
        for(j=1;sum<n;j++)
            sum+=j;
        j--;
        sum-=j;
        pos=n-sum;
        row=j;
        rem=(j-pos)+1;
        if(row%2==0)
            cout<<"TERM "<<n<<" IS "<<pos<<"/"<<rem<<endl;
        else
            cout<<"TERM "<<n<<" IS "<<rem<<"/"<<pos<<endl;
    }
    return 0;
}