/*
kamalsam
*/
#include<iostream>
#include<stack>
#include<string.h>
#include<ctype.h>
using namespace std;
int priority(char a)
{
 switch(a)
 {
  case '+': return 1;
  case '-': return 2;
  case '*': return 3;
  case '/': return 4;
  case '^': return 5;
 }
}   
int main()
{
 stack<char>a;
 int size,i,j;
 cin>>size;
 char exp[size][400];
 char ans[size][400];
 for(i=0;i<size;i++)
 {
  int count=0;
  cin>>exp[i];
  int len=strlen(exp[i]);
  for(j=0;j<len;j++)  
  {
    char ch=exp[i][j];
    if(isalpha(ch))
    {
     ans[i][count++]=ch;
    }
    else if(ch=='(')
    {
      a.push(ch);
    }
    else if(ch==')')
    {
     while(a.top()!='(')
     {
      ans[i][count++]=a.top();
      a.pop();
     }
     a.pop();
    }
    else
    {
     if(priority(ch)>priority(a.top()))
     {
       a.push(ch);
     }
     else
     {
      while(priority(ch)<priority(a.top()))
      {
       ans[i][count++]=a.top();
       a.pop();
      }
     }
    }    
    
  }
  while(a.empty()==0)
  {
   ans[i][count++]=a.top();
  }
  ans[i][count]='\0';
 }
 for(i=0;i<size;i++)
 {
  cout<<ans[i]<<endl;
 }
 return 0;
}