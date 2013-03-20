/*
kamalsam
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double sort(double a,double b,double c)
{
    double ans;
    ans=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return ans;
}
double convert(string s) 
{
    int i,j,sum,num,pos;
    double ans;
    sum=j=i=pos=0;
    if(s=="ab")
     ans=0;
    else
    {
        while(i<s.size())
        {
            if(s[i]=='.')
            {
              pos=i+1;
              j=1;
            }
            else
            {
                num=s[i]-48;
                sum*=10;
                sum+=num;
            }
            i++;
        }
        if(j==1)
        {
         num=s.size()-pos;
         i=1;
         while(j<=num)
         {
          i*=10;
          j++;
         }
         ans=(double)sum/i; 
        }
        else
          ans=sum;
    }
    return ans;
}
int attendance(double a)
{
    if(a<51)
     return 5;
    else if(a<61)
     return 4;
    else if(a<71)
     return 3;
    else if(a<81)
     return 2;
    else if(a<91)
     return 1;
    else
     return 0;
}
int gpa(double a)
{
    if(a>=91)
     return 10;
    else if(a>=81)
     return 9;
    else if(a>=71)
     return 8;
    else if(a>=61)
     return 7;
    else if(a>50)
     return 6;
    else if(a==50)
     return 5;
    else
     return 0;
}
int main()
{
    int t,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int cre[7],gpa1[7],count=0,sum;
        double sub[7][6],inter,inter1,inter2,ans,ans1;
        string s;
        for(j=0;j<6;j++)
         cin>>cre[j];
        for(j=0;j<6;j++)
        {
            for(k=0;k<5;k++)
            {
                cin>>s;
                sub[j][k]=convert(s);
            }
        }
        for(j=0;j<6;j++)
        {
            inter1=sort(sub[j][0],sub[j][1],sub[j][2]);
            if(inter1==sub[j][0])
             sub[j][0]=-1;
            else if(inter1==sub[j][1])
             sub[j][1]=-1;
            else if(inter1==sub[j][2])
             sub[j][2]=-1;
            inter2=sort(sub[j][0],sub[j][1],sub[j][2]);
            inter=((inter1+inter2)/40)*45;
            ans=inter+(sub[j][3]/2)+attendance(sub[j][4]);
            gpa1[j]=gpa(ans);
        }
        for(j=0;j<6;j++)
        {
            if(gpa1[j]==0)
             count=1;
        }
        if(count==1)
          s="FAILED";
        else
          s="PASSED";
        ans1=sum=0;
        for(j=0;j<6;j++)
            ans1+=(cre[j]*gpa1[j]);
        for(j=0;j<6;j++)
           sum+=cre[j];
        ans1/=sum;
        cout<<s<<", "<<fixed<<setprecision(2)<<ans1<<endl;
    }
    return 0;
}