/*
kamalsam
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<stdlib.h>
using namespace std;
#define pair1 pair<int,int>
int r,c;
int graph[200][200];
bool range(int i,int j)
{
 if(i>=0&&i<r&&j>=0&&j<c)
  return true;
 return false;
}
void bfs(pair1 p)
{
 int i,j;
 queue<pair1> q;
 q.push(p);
 while(q.empty()!=1)
 {
  pair1 l;
  int d;
  l=q.front();
  q.pop();
  for(i=l.first-1;i<=l.first+1;i++)
  {
   for(j=l.second-1;j<=l.second+1;j++)
   {
    if(range(i,j))
    {
     d=abs(i-p.first)+abs(j-p.second);
     if(graph[i][j]>d)
     {
      graph[i][j]=d;
      q.push(pair1(i,j));
     }
    }
   }
  }
 }
}
int main()
{
 int i,t;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
  int j,k;
  scanf("%d%d",&r,&c);
  string str[r];
  for(j=0;j<r;j++)
   cin>>str[j];
  for(j=0;j<r;j++)
   for(k=0;k<c;k++)
    graph[j][k]=(str[j][k]=='0')?1000000:0;
  for(j=0;j<r;j++)
  {
   for(k=0;k<c;k++)
    if(str[j][k]=='1')
    {
     pair1 p;
     bfs(pair1(j,k));
    }
  }
  for(j=0;j<r;j++)
  {
   for(k=0;k<c;k++)
   {
    printf("%d ",graph[j][k]);
   }
   printf("\n");
  }
 }
 return 0;
}