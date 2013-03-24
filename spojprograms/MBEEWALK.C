/*
kamalsam
*/
#include<stdio.h>
long func(int a)
{
    switch(a)
    {
        case 1:
         return 0; 
        case 2:
         return 6;
        case 3:
         return 12;
        case 4:
         return 90;
        case 5:
         return 360;
        case 6:
         return 2040;
        case 7:
         return 10080;
        case 8:
         return 54810;
        case 9:
         return 290640;
        case 10:
         return 1588356;
        case 11:
         return 8676360;
        case 12:
         return 47977776;
        case 13:
         return 266378112;
        case 14:
         return 1488801600;
    }
}
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%ld\n",func(n));
    }
    return 0;
}