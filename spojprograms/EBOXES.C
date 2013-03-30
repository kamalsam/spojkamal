/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,t,f;
        scanf("%d%d%d%d",&n,&k,&t,&f);
        printf("%d\n",(f-n)/(k-1)+f);
    }
    return 0;
}