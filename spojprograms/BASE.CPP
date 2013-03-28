/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;
int func1(char c)
{
    int l=c;
    if(l>=48&&l<=57)
     return l-48;
    else
     return l-55;
}
long decimal(string num,int from)
{
    int rem,i=0,m=num.size()-1;
    long sum=0;
    while(m>=0)
    {
        rem=func1(num[m]);
        sum+=(rem*pow(from,i++));
        m--;
    }
    return sum;
}
char func(int n)
{
    if(n>=0&&n<=9)
     return n+48;
    else
     return n+55;
}
void baseconvert(long dec,int to)
{
    int a[100],j,r=0,i;
    if(dec==0)
     printf("      0\n");
    else
    {
        while(dec!=0)
        {
            a[r++]=dec%to;
            dec/=to;
        }
        if(r>7)
         printf("  ERROR\n");
        else
        {
            r--;
            j=r;
            while(j<6)
            {
                printf(" ");
                j++;
            }
            for(i=r;i>=0;i--)
             printf("%c",func(a[i]));
            printf("\n");
        }
    }
}
int main()
{
    string num;
    int from,to;
    long dec;
    while(cin>>num)
    {
        scanf("%d%d",&from,&to);
        dec=decimal(num,from);
        baseconvert(dec,to);
    }
    return 0;
}