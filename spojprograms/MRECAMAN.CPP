/*
kamalsam
*/
#include<iostream>
#include<map>
using namespace std;
void func(int v[],map<int,int> a)
{
    int i,ans;
    v[0]=0;
    a[0]=0;
    for(i=1;i<=500000;i++)
    {
        ans=v[i-1]-i;
        if(ans>1)
        {
            if(a[ans])
               v[i]=(v[i-1]+i);
            else
               v[i]=(v[i-1]-i);
        }
        else
           v[i]=(v[i-1]+i);
        a[v[i]]=i;
    }
}
int main()
{
    int k;
    int v[500010];
    map<int,int> a;
    func(v,a);
    while(1)
    {
        cin>>k;
        if(k==-1)
         break;
        else
         cout<<v[k]<<endl;
    }
    return 0;
}
