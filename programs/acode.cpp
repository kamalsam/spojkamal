/*
acode
*/
#include<stdio.h>
#include<string.h>
int len;
char str[10000];
long long dp[10000];
long long func(int i)
{
    long long ret=0;
    if(i>=len)
     return 1;
    if(dp[i])
     return dp[i];
    if(str[i]=='0')
     return 0;
    ret+=func(i+1);
    if(i+1<len&&(10*(str[i]-'0')+str[i+1]-'0'<=26))
     ret+=func(i+2);
    return dp[i]=ret;
}
int main()
{
    while(1)
    {
        scanf("%s",str);
        if(str[0]=='0')
         break;
        else
        {
            len=strlen(str);
            memset(dp,0,sizeof(dp));
            printf("%lld\n",func(0));
        }
    }
    return 0;
}