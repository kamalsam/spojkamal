/*
kamalsam
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,i,j,id,k,count;
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        count=0;
        cin>>id;
        for(j=0;j<v.size();j++)
        {
            if(v[j]==id)
            {
                count=1;
                j=v.size();
            }
        }
        if(count!=1)
         v.push_back(id);
        cin>>m;
        for(j=0;j<m;j++)
        {
            count=0;
            cin>>id;
            for(k=0;k<v.size();k++)
            {
                if(v[k]==id)
                {
                    count=1;
                    k=v.size();
                }
            }
            if(count!=1)
             v.push_back(id);
        }
    }
    cout<<v.size()-n<<endl;
    return 0;
}