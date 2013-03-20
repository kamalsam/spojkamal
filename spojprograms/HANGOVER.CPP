/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    float val;
    float sum,i;
    while(1)
    {
        cin>>val;
        if(val==0.00)
         break;
        else
        {
            sum=0;
            i=2;
            while(sum<=val)
            {
             sum+=(1/i);
             i++;
            }
            cout<<i-2<<" "<<"card(s)"<<endl;
        }
    }
    return 0;
}