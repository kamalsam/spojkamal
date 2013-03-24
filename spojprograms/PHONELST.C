/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
typedef struct tree
{
    struct tree *zero,*one,*two,*three,*four,*five,*six,*seven,*eight,*nine;
}*node;
int globflag;
node init(node t)
{
    t->zero=NULL;
    t->one=NULL;
    t->two=NULL;
    t->three=NULL;
    t->four=NULL;
    t->five=NULL;
    t->six=NULL;
    t->seven=NULL;
    t->eight=NULL;
    t->nine=NULL;
    return t;
}
bool func(node t)
{
    if(t->zero==NULL&&t->one==NULL&&t->two==NULL&&t->three==NULL&&t->four==NULL&&t->five==NULL&&t->six==NULL&&t->seven==NULL&&t->eight==NULL&&t->nine==NULL)
     return true;
  return false;
}
node insert(node t,string s)
{
    int i,m=s.size(),count=0;
    node head=t;
    for(i=0;i<m;i++)
    {
        node p;
        p=(struct tree*)malloc(sizeof(struct tree));
        p=init(p);
        switch(s[i])
        {
        case '0':
            if(t->zero==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->zero=p;
            }
            else
             count++;
            t=t->zero;
            break;
        case '1':
            if(t->one==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->one=p;
            }
            else
             count++;
            t=t->one;
            break;
        case '2':
            if(t->two==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->two=p;
            }
            else
             count++;
            t=t->two;
            break;
        case '3':
            if(t->three==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->three=p;
            }
            else
             count++;
            t=t->three;
            break;
        case '4':
            if(t->four==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->four=p;
            }
            else
             count++;
            t=t->four;
            break;
        case '5':
            if(t->five==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->five=p;
            }
            else
             count++;
            t=t->five;
            break;
        case '6':
            if(t->six==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->six=p;
            }
            else
             count++;
            t=t->six;
            break;
        case '7':
            if(t->seven==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->seven=p;
            }
            else
             count++;
            t=t->seven;
            break;
        case '8':
            if(t->eight==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->eight=p;
            }
            else
             count++;
            t=t->eight;
            break;
        case '9':
            if(t->nine==NULL)
            {
                if(count>0&&func(t))
                {
                    globflag=1;
                    printf("NO\n");
                    i=m;
                }
                else if(count>0)
                 count=0;
                t->nine=p;
            }
            else
             count++;
            t=t->nine;
            break;
        }
    }
    if(count>0&&globflag==0&&!func(t))
    {
      printf("NO\n");
      globflag=1;
    }
    return head;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
    int n,i;
    scanf("%d",&n);
    char s1[n][20];
    string s[n];
    for(i=0;i<n;i++)
     scanf("%s",s1[i]);
    for(i=0;i<n;i++)
     s[i]=(string)s1[i];
    node head;
    head=(struct tree*)malloc(sizeof(struct tree));
    head=init(head);
    for(i=0;i<n;i++)
    {
        if(globflag==0)
         head=insert(head,s[i]);
        else
         i=n;
    }
    if(globflag==0)
     printf("YES\n");
    globflag=0;
   }
    return 0;
}