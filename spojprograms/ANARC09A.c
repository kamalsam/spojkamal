/*
kamalsam
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int r=1;
    while(1)
    {
        char s[4096];
        int i,x,y,n;
        i=x=y=0;
        scanf("%s",s);
        if(s[i]=='-')
         break;
        else
        {
            n=strlen(s);
            for(i=0;i<n;i++)
            {
                if(s[i]=='{')
                  x++;
                else
                  x--;
                if(x<0)
                {
                 x+=2;
                 y++;
                }
            }
            printf("%d. %d\n",r++,(x/2)+y);
        }
    }
    return 0;
}