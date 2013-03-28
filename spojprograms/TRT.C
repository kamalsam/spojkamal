/*
kamalsam
*/
#include<stdio.h>
long long mem[2002][2002];
long long func(int v[],int i,int j,int day)
{
    if(mem[i][j]!=0)
     return mem[i][j];
    if(i==j)
     return v[i]*day;
    else 
    {
        long pos1=v[i]*day+func(v,i+1,j,day+1);
        long pos2=v[j]*day+func(v,i,j-1,day+1);
        mem[i][j]=pos1>pos2?pos1:pos2;
        return mem[i][j];
    }
}
int main()
{
    int n,i;
    long long ans;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++)
     scanf("%d",&v[i]);
    ans=func(v,0,n-1,1);
    printf("%lld\n",ans);
    return 0;
}