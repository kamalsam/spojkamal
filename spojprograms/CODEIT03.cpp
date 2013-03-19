/*
kamalsam
*/
#include<iostream>
using namespace std;
void func(int val)
{
	 switch(val)
	 {
		  case 0:
			cout<<"Sunday"<<endl;
			break;
		  case 1:
			cout<<"Monday"<<endl;
			break;
		  case 2:
			cout<<"Tuesday"<<endl;
			break;
		  case 3:
			cout<<"Wednesday"<<endl;
			break;
		  case 4:
			cout<<"Thursday"<<endl;
			break;
		  case 5:
			cout<<"Friday"<<endl;
			break;
		  case 6:
			cout<<"Saturday"<<endl;
			break;
	 }
}
int func2(int m)
{
	switch(m)
	{
		 case 0:
		  return 0;
		 case 1:
		  return 31;
		 case 2:
		  return 59;
		 case 3:
		  return 90;
		 case 4:
		  return 120;
		 case 5:
		  return 151;
		 case 6:
		  return 181;
		 case 7:
		  return 212;
		 case 8:
		  return 243;
		 case 9:
		  return 273;
		 case 10:
		  return 304;
		 case 11:
		  return 334;
	}
}
int main()
{
	 int n,i,d,m,y;
	 int ans,ans1,sum,leap;
	 int a,b,c;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
		  sum=0;
		  cin>>d;
		  cin>>m;
		  cin>>y; 
		  ans=(y-1)/400;
		  ans1=(y-1)-(ans*400);
		  ans=ans1/100;
		  ans1=ans1-(ans*100);
		  sum+=(5*ans);
                  if(ans1!=0)
		   ans=ans1; 
                  else  
                   ans=0;
		  a=y%4;
		  b=y%100;
		  c=y%400;
		  if(((a==0)&&(b!=0))||(c==0))
		    leap=1;
		  else
		    leap=0;
		  a=ans/4;
		  ans1=(a*2)+(ans-a);
		  sum+=(ans1%7);
		  ans1=m-1;
		  ans=func2(ans1);
		  if(leap==1&&m>2)
		    ans+=1;
		  ans1=(ans+d)%7;
		  sum+=ans1;
		  ans=(sum%7);
		  func(ans);
	 }
	 return 0;
}