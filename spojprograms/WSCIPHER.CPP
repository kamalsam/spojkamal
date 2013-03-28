/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    while(1)
    {
        int k1,k2,k3,n;
        string s;
        cin>>k1>>k2>>k3;
        if(k1==0&&k2==0&&k3==0)
         break;
        else
        {
            string a,b,c,l;
            int i,j;
            cin>>s;
            n=s.size();
            int a1[n],b1[n],c1[n];
            char a2[n],b2[n],c2[n];
            int aval,bval,cval;
            aval=bval=cval=0;
            for(i=0;i<n;i++)
            {
                if(s[i]>='a'&&s[i]<='i')
                { 
                    a+=s[i];
                    a1[aval++]=i;
                }
                else if(s[i]>='j'&&s[i]<='r')
                {
                    b+=s[i];
                    b1[bval++]=i;
                }
                else
                {
                    c+=s[i];
                    c1[cval++]=i;
                }
            }
            for(i=0;i<aval;i++)
             a2[(i+k1)%aval]=a[i];
            for(i=0;i<bval;i++)
             b2[(i+k2)%bval]=b[i];
            for(i=0;i<cval;i++)
             c2[(i+k3)%cval]=c[i];
            for(i=0;i<aval;i++)
            {l=a2[i]; s.replace(a1[i],1,l);}
            for(i=0;i<bval;i++)
            {l=b2[i]; s.replace(b1[i],1,l);}
            for(i=0;i<cval;i++)
            {l=c2[i]; s.replace(c1[i],1,l);}
            cout<<s<<endl;
        }
    }
    return 0;
}