/*
kamalsam
*/
#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int s,i,n;
    int r,count;
    while(1)
    {
        cin>>n;
        if(n==0)
         break;
        else
        {
            int a[1422];
            count=0;
            for(i=0;i<n;i++)
            {  
             cin>>a[i];
            }
            sort(a,n);
            for(i=0;i<n-1;i++)
            {
                if((a[i]-a[i+1])>200)
                 count++;                
              r=a[i+1];
            }
            if(count>=1)
             cout<<"IMPOSSIBLE"<<endl;
            else
            {
                if((((1422-a[0])*2)<=200)&&(r<=200))
                 cout<<"POSSIBLE"<<endl;
                else
                 cout<<"IMPOSSIBLE"<<endl;
            }
        }
    }
    return 0;
}