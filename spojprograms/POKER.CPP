/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
void func(int a[],char ch)
{
    switch(ch)
    {
        case '2': a[2]++;break;
        case '3': a[3]++;break;
        case '4': a[4]++;break;
        case '5': a[5]++;break;
        case '6': a[6]++;break;
        case '7': a[7]++;break;
        case '8': a[8]++;break;
        case '9': a[9]++;break;
        case 'T': a[10]++;break;
        case 'J': a[11]++;break;
        case 'Q': a[12]++;break;
        case 'K': a[13]++;break;
        case 'A': a[14]++;break;
    }
}
void func1(int b[],char ch)
{
    switch(ch)
    {
        case 'S': b[1]++;break;
        case 'H': b[2]++;break;
        case 'D': b[3]++;break;
        case 'C': b[4]++;break;
    }
}
int one(int a[],int b[])
{
    if((a[14]==1&&a[13]==1&&a[12]==1&&a[11]==1&&a[10]==1)&&(b[1]==5||b[2]==5||b[3]==5||b[4]==5))
     return 1;
    return 0;
}
int two(int a[],int b[])
{
    int j,count=0;
    for(j=1;j<=4;j++)
     if(b[j]==5)
      count=1;
    if(count==1)
    {
        for(j=2;j<=10;j++)
         if(a[j]==1&&a[j+1]==1&&a[j+2]==1&&a[j+3]==1&&a[j+4]==1)
          return 1;
        if(a[14]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1)
         return 1;
    }
    return 0;
}
int three(int a[])
{
    int j;
    for(j=2;j<=14;j++)
     if(a[j]==4)
      return 1;
    return 0;  
}
int four(int a[])
{
    int j,count=0;
    for(j=2;j<=14;j++)
     if(a[j]==3)
      count=1;
    if(count==1)
    {
     for(j=2;j<=14;j++)
      if(a[j]==2)
       return 1;
    } 
     return 0;
}
int five(int b[])
{
    int j;
    for(j=1;j<=4;j++)
     if(b[j]==5)
      return 1;
    return 0;
}
int six(int a[])
{
     int j;
     for(j=2;j<=10;j++)
         if(a[j]==1&&a[j+1]==1&&a[j+2]==1&&a[j+3]==1&&a[j+4]==1)
          return 1;
     if(a[14]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1)
         return 1;
     return 0;
}
int seven(int a[])
{
    int j;
    for(j=2;j<=14;j++)
     if(a[j]==3)
      return 1;
    return 0;
}
int eight(int a[])
{
    int j,count=0;
    for(j=2;j<=14;j++)
     if(a[j]==2)
      count++;
    if(count==2)
     return 1; 
    return 0;
}
int nine(int a[])
{
    int j;
    for(j=2;j<=14;j++)
     if(a[j]==2)
      return 1;
    return 0;
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a[15]={0},b[5]={0};
        string s[6];
        for(j=0;j<5;j++)
         cin>>s[j];
        for(j=0;j<5;j++)
        {
         func(a,s[j][0]);
         func1(b,s[j][1]);
        }
        if(one(a,b))
         cout<<"royal flush"<<endl;
        else if(two(a,b))
         cout<<"straight flush"<<endl;
        else if(three(a))
         cout<<"four of a kind"<<endl;
        else if(four(a))
         cout<<"full house"<<endl;
        else if(five(b))
         cout<<"flush"<<endl;
        else if(six(a))
         cout<<"straight"<<endl;
        else if(seven(a))
         cout<<"three of a kind"<<endl;
        else if(eight(a))
         cout<<"two pairs"<<endl;
        else if(nine(a))
         cout<<"pair"<<endl;
        else 
         cout<<"high card"<<endl;
    }
    return 0;
}
