/*
kamalsam
*/
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    while(1)
    {
        cin>>n;
        if(n==-1)
         break;
        else
        {
            int a[n];
            long int sum,ans,item;
            sum=0;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
            if(sum%n!=0)
             cout<<"-1"<<endl;
            else
            {
                item=sum/n;
                long int count=0;
                for(i=0;i<n;i++)
                {
                        if(a[i]<item)
                        {
                            while(a[i]<item)
                            {
                              a[i]++;
                              count++;
                            }
                        }
                        else if(a[i]>item)
                        { 
                            while(a[i]>item)
                            {
                                a[i]--;
                                count++;
                            }
                        }
                }
                ans=count/2;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}