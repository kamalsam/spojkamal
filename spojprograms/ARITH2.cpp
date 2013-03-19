/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    long long int n,i,val,val2;
    char ch;
    int d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        d=1;
        cin>>val;
        while(d)
        {
            cin>>ch;
            switch(ch)
            {
                case '+':
                 cin>>val2;
                 val+=val2;
                 break;
                case '-':
                 cin>>val2;
                 val-=val2;
                 break;
                case '*':
                 cin>>val2;
                 val*=val2;
                 break;
                case '/':
                 cin>>val2;
                 val/=val2;
                 break;                 
                case '=':
                 d=0;
                 break;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}