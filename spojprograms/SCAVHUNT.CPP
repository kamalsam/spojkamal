/*
kamalsam
*/
#include<iostream>
#include<string>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    int t,test=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char s[100],s1[100];
        map<string,string> mymap;
        map<string,int> mymap1;
        map<string,string> :: iterator itr;
        map<string,int> :: iterator itr1;
        for(i=0;i<n-1;i++)
        {
            scanf("%s%s",s,s1);
            mymap[(string)s]=(string)s1;
            mymap1[(string)s]++;
            mymap1[(string)s1]++;
        }
        printf("Scenario #%d:\n",test++);
        int r=0,count=0;
        string str[3];
        for(itr1=mymap1.begin();itr1!=mymap1.end();itr1++)
        {
            if(itr1->second==1)
            {
                str[r++]=itr1->first;
                count++;
            }
            if(count==2)
             break;
        }
        int flag=0;
        string base,basenot;
        for(itr=mymap.begin();itr!=mymap.end();itr++)
        {
            if(itr->first.compare(str[0])==0)
            {
                printf("%s\n%s\n",str[0].c_str(),mymap[str[0]].c_str());
                base=mymap[str[0]];
                basenot=str[1];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%s\n%s\n",str[1].c_str(),mymap[str[1]].c_str());
            base=mymap[str[1]];
            basenot=str[0];
        }
        while(base.compare(basenot)!=0)
        {
            base=mymap[base];
            printf("%s\n",base.c_str());
        }
        printf("\n");
    }
    return 0;
}
