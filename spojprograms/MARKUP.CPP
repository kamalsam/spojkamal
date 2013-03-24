/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int slashon=0;
 while(getline(cin,s))
 {
  int m=s.size(),i;
  for(i=0;i<m;i++)
  {
   if(s[i]=='\\'&&slashon==0)
   {
     switch(s[i+1])
     {
      case 'b':
       case 'i':
        i++;
        break;
      case 's':
       i+=2;
       while(s[i]>=46&&s[i]<=57)
        i++;
       i--;
       break;
      case '\\':
       cout<<s[i+1];
       i++;
       break;
      case '*':
       slashon=1;
       i++;
       break;
     /* default:
       cout<<s[i];*/
     }     
   }
   else if(s[i]=='\\'&&slashon==1)
   {
    if(s[i+1]=='*')
    {
     i++;
     slashon=0;
    }
    else
     cout<<s[i];
   }
   else
    cout<<s[i];
  }
  cout<<endl;
 }
 return 0;
}
