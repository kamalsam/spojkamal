/*
kamalsam
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float g,b,max,min;
    int ans;
    while(1)
    {
        cin>>g>>b;
        if(g==-1&&b==-1)
         break;
        else
        {
            if(g>b)
            {
                max=g;
                min=b;
            }
            else
            {
                max=b;
                min=g;
            }
            ans=ceil(max/(min+1));
            cout<<ans<<endl;
        }
    }
    return 0;
}