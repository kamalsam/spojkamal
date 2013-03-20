/*
kamalsam
*/
#include<iostream>
#include<map>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)
         break;
        else
        {
            int i,j;
            bool a[2101][2101];
            int pos1,pos2;
            string s,s1,s2;
            bool flag=false;
            for(i=0;i<n;i++)
             for(j=0;j<n;j++)
              a[i][j]=false;
            for(i=0;i<n;i++)
             a[i][i]=true;
            map<string,int> map1;
            for(i=0;i<n;i++)
            {
                cin>>s;
                map1[s]=i;
            }
            for(i=0;i<m;i++)
            {
                cin>>s1>>s2;
                pos1=map1[s1];
                pos2=map1[s2];
                for(j=0;j<n;j++)
                {
                  if(a[pos1][j]==true)
                    a[pos2][j]=true;
                  if(a[pos2][j]==true)
                    a[pos1][j]=true;
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(a[i][j]==false)
                    {
                        flag=true;
                        i=j=n;
                    }
               }
            }
            if(flag)
             printf("NO\n");
            else
             printf("YES\n");
        }
    }
    return 0;
}