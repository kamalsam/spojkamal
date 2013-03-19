/*
kamalsam
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l;
    while(1)
    {
        scanf("%f",&l);
        if(l==0)
         break;
        else         
            printf("%.2f\n",((l*l)/(4*acos(0.0))));
    }
    return 0;
}