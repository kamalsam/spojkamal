/*
kamalsam
*/
#include<iostream>
#include<queue>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> v[10001];
bool vertices[10001];
int n;
bool bfs()
{
    int cur,m,i;
    queue<int> q;
    q.push(1);
    while(q.empty()!=1)
    {
        cur=q.front();
        q.pop();
        if(!vertices[cur])
        {
            vertices[cur]=true;
            m=v[cur].size();
            for(i=0;i<m;i++)
             if(!vertices[v[cur][i]])
              q.push(v[cur][i]);
        }
    }
    for(i=1;i<n;i++)
     if(!vertices[i])
      return false;
    return true;
}
int main()
{
    int m,i,e1,e2;
    scanf("%d%d",&n,&m);
    if(n!=m+1)
     printf("NO\n");
    else
    {
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&e1,&e2);
            v[e1].push_back(e2);
        }
        if(bfs())
         printf("YES\n");
        else
         printf("NO\n");
    }
    return 0;
}