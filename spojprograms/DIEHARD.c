/*
kamalsam
*/
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int h,a,count=0;
        scanf("%d%d",&h,&a);
        while(h>0&&a>0)
        {
            h+=3;
            a+=2;
            count++;
            if(h>5&&a>10)
            {
                h-=5;
                a-=10;
            }
            else if(h>20)
            {
                h-=20;
                a+=5;
            }
            else
             break;
            if(h>0&&a>0)
              count++;
        }
        printf("%d\n",count);
    }
    return 0;
}