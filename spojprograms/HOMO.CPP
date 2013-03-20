/*
kamalsam
*/
#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i;
    multiset<long> s;
    int homo=0,hetero=0;    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char item[20],ch;
        long val;
        int r;
        scanf("%s%ld",item,&val);
        ch=item[0];
        switch(ch)
        {
            case 'i':
             s.insert(val);          
             r=s.count(val);
             if(r==2)
              homo++;
             else if(r<2)
              hetero++;
             break;
            case 'd':
             int r=s.count(val);
             if(r)
             {
                 if(r-1==1)
                  homo--;
                 else if(r-1==0)
                  hetero--;               
                 s.erase(s.find(val));                
             }
             break;
        }
        if(homo&&(hetero>1))
         printf("both\n");
        else if(homo)
         printf("homo\n");
        else if(hetero>1)
         printf("hetero\n");
        else
         printf("neither\n");
        if(homo<0)
         homo=0;
        if(hetero<0)
         hetero=0;
    }
    return 0;
}
