/*
kamalsam
*/
#include<stdio.h>
#include<cstring>
int main()
{
 int q,i,grp=0,val;
 bool a[20010];
 memset(a,false,sizeof(a));
 scanf("%d",&q);
 for(i=0;i<q;i++)
 {
  scanf("%d",&val);
  a[val]=true;
  if(a[val-1]&&a[val+1])
   grp--;
  else if(!a[val-1]&&!a[val+1])
   grp++;
  printf("%d\n",grp);
 }
 printf("Justice\n");
 return 0;
}
