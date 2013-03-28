/*
kamalsam
*/
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int a[1000],b[1000],i,j;
    stack<int> s;
    while(1)
    {
        cin>>n;
        if(n==0)
         break;
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                b[i]=a[i];
            }
            sort(b,b+n);
            j=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>b[j])
                 s.push(a[i]);
                else if(a[i]==b[j])
                {
                    j++;
                    while(s.size()!=0&&s.top()==b[j])
                    {
                        j++;
                        s.pop();
                    }
                }
            }
            if(s.size()==0)
             cout<<"yes"<<endl;
            else
             cout<<"no"<<endl;
           while(s.empty()!=1)
            s.pop();
        }
    }
    return 0;
}
