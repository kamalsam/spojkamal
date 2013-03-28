/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
 int t,i;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
  int n,m;
  char s[50010];
  scanf("%d %s",&n,s);
  m=strlen(s)-1;
  printf("%c\n",s[m]);
 }
 return 0;
}