/*
kamalsam
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int i,j,n,val;
    long long int pos,sum,lim,median;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val;
        j=1;
        sum=0;
        while(val>sum)
        {
            sum+=pow(2,j);
            j++;
        }
        j--;
        lim=j;
        pos=(val-(sum/2))+1;
        median=pow(2,lim);
        for(j=lim-1;j>=0;j--)
        {
            median/=2;
            if(pos>median)
            {
                cout<<"6";
                pos=pos-median;
            }
            else
             cout<<"5";
        }
        cout<<endl;
    }
    return 0;
}