/*
kamalsam
*/
#include<stdio.h>
long long a[31];
void func()
{
    int i;
    a[1]=3;
    a[2]=9;
    for(i=3;i<=30;i++)
        a[i]=(a[i-1]*2)+a[i-2];
}
int main()
{
    int t,i;
    scanf("%d",&t);
    func();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
