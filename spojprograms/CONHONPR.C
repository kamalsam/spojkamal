/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int table[105][105];
int a[105];
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,count=0;
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++)
         for(j=1;j<=m;j++)
          scanf("%d",&table[i][j]);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(table[i][j]!=-1)
                {
                    if(!a[table[i][j]])
                    {
                        int pos=table[i][j];
                        if(pos==table[i-1][j-1]||pos==table[i-1][j]||pos==table[i-1][j+1]||pos==table[i][j-1]||pos==table[i][j+1]||pos==table[i+1][j-1]||pos==table[i+1][j]||pos==table[i+1][j+1])
                        {
                            a[pos]=1;
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d\n",count);
        memset(a,0,sizeof(a));
        memset(table,0,sizeof(table));
    }
    return 0;
}