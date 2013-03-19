/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long third,j,lthird,sum,num,first,diff;
        cin>>third>>lthird>>sum;
        num=(2*sum)/(third+lthird);
        diff=(lthird-third)/(num-5);
        first=third-(2*diff);
        cout<<num<<endl;
        for(j=0;j<num;j++)
        {
            cout<<first<<" ";
            first+=diff;
        }
        cout<<endl;
    }
    return 0;
}