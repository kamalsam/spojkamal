/*
kamalsam
*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> myset;
    multiset<int> :: iterator front,back;
    int t,i,val,j;
    long long sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,val;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&val);
            myset.insert(val);
        }
        front=myset.begin();
        back=myset.end();
        back--;
        sum+=(*back-*front);
        myset.erase(front);
        myset.erase(back);
    }
    printf("%lld\n",sum);
    return 0;
}
