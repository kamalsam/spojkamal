/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{    
    while(1)
    {
        int a,a1,b,b1,c,c1,d,d1;
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
        if(a==-1&&a1==-1&&b==-1&&b1==-1&&c==-1&&c1==-1&&d==-1&&d1==-1)
         break;
        else
        {
            int aa,bb,cc,dd,an,at;
            aa=ceil((float)a/a1);
            bb=ceil((float)b/b1);
            cc=ceil((float)c/c1);
            dd=ceil((float)d/d1);
            an=(aa>bb)?((aa>cc)?aa:cc):((bb>cc)?bb:cc);
            at=(an>dd)?an:dd;           
            aa=(at*a1)-a;
            bb=(at*b1)-b;
            cc=(at*c1)-c;
            dd=(at*d1)-d;
            printf("%d %d %d %d\n",aa,bb,cc,dd);
        }
    }
    return 0;
}