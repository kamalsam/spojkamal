/*
kamalsam
*/
#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    while(1)
    {
        char s[1020];
        char ch,ch1;
        int i,count;
        gets(s);
        if(strcmp(s,"*")==0)
         break;
        else
        {
            i=0;
            ch=s[0];
            if(isupper(ch))
             ch1=tolower(ch);
            else 
             ch1=toupper(ch);
            count=0;            
            while(s[i]!='\0')
            {
                if(s[i]==' ')
                {
                  if(ch!=s[i+1]&&ch1!=s[i+1])
                    count++;
                } 
                i++;
            }
            if(count==0)
             cout<<"Y"<<endl;
            else
             cout<<"N"<<endl;
        }
    }
    return 0;
}