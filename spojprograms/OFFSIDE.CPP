/*
kamalsam
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,a,d;
    while(1)
    {
        cin>>a>>d;
        if(a==0&&d==0)
         break;
        else
        {
            int x[a],y[d],count=0;
            for(i=0;i<a;i++)
             cin>>x[i];
            for(i=0;i<d;i++)
             cin>>y[i];
            sort(y,y+d);
            for(i=0;i<a;i++)
            {
                if(x[i]<=y[1])
                {
                    if((x[i]!=y[0]&&x[i]!=y[1])||(x[i]!=y[1]))
                    {
                        count=1;
                        i=a;
                    }   
                }
            }
            if(count!=1)
             cout<<"N"<<endl;
            else
             cout<<"Y"<<endl;
        }
    }
    return 0;
}
