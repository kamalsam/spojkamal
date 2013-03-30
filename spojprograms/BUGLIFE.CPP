/*
kamalsam
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int vertices[2001],glob=1;
vector<int> v[2001];
bool bfs(int a)
{
    queue<int> q;
    q.push(a);
    int cur;
    vertices[a]=1;
    while(q.empty()!=1)
    {
        cur=q.front();
        q.pop();
        int m=v[cur].size(),i;
        for(i=0;i<m;i++)
        {
            if(!vertices[v[cur][i]])
            {
                q.push(v[cur][i]);
                if(vertices[cur]==1)
                  vertices[v[cur][i]]=2;
                else
                  vertices[v[cur][i]]=1;
            }
            else
            {
                if(vertices[cur]==vertices[v[cur][i]])
                  return true;
            }
        }
    }
    return false;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,e1,e2;
        bool flag=false;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&e1,&e2);
            v[e1].push_back(e2); 
            v[e2].push_back(e1);
        }
        for(i=1;i<=n;i++)
        {
            if(!vertices[i])
            {
                if(bfs(i))
                {
                    flag=true;
                    break;
                }
            }
        }
        printf("Scenario #%d:\n",glob++);
        if(flag)
         printf("Suspicious bugs found!\n");
        else
         printf("No suspicious bugs found!\n"); 
        memset(vertices,0,sizeof(vertices));
        for(i=1;i<=n;i++)
         v[i].clear();
    }
    return 0;
}
