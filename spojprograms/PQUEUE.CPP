/*
kamalsam
*/
#include<iostream>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int t,i,n,m,j,val,ans;
    queue<int> a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        int c[n];
        for(j=0;j<n;j++)
        {
            cin>>val;
            a.push(val);
            c[j]=val;
        }
        sort(c,c+n,greater<int>());
        for(j=0;j<n;j++)
         b.push(c[j]);
        j=0;
        while(j<=m)
        {
            if(a.front()<b.front())
            {
                 val=a.front();
                 a.pop();
                 a.push(val);
                 if(j==m)      
                 {
                     m=a.size()-1;
                     j=-1;
                 }
            }
            else if(a.front()==b.front())
            {
                b.pop();
                a.pop();
                if(j==m)
                {
                  ans=n-b.size();
                  cout<<ans<<endl;
                  j=m+1;
                }
            }
            j++;
        }
        while(a.empty()!=1) 
         a.pop();
        while(b.empty()!=1)
         b.pop();
    }
    return 0;
}
