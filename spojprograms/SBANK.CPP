/*
kamalsam
*/
#include<map>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    char s[100];
    for(i=0;i<t;i++)
    {
        int n,j,k;
        scanf("%d\n",&n);
        map<string,int> map1;
        for(j=0;j<n;j++)
        {
           gets(s);
           map1[ (string)s]++;
        }
        map<string,int> :: iterator itr;
        for(itr=map1.begin();itr!=map1.end();itr++)
        {
          printf("%s%d\n",(*itr).first.c_str(),(*itr).second);
        }
        printf("\n");
    }
    return 0;
}