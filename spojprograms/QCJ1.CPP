/*
kamalsam
*/
#include<iostream>
#include<string>
using namespace std;
int n;
string s[30];
int up,down,walk,tot;
void funcup()
{
    cout<<"Up "<<up<<" steps"<<endl;
    up=0;
}
void funcdown()
{
    cout<<"Down "<<down<<" steps"<<endl;
    down=0;
}
void funcwalk()
{
    cout<<"Walk "<<walk<<" steps"<<endl;
    walk=0;
}
void func(int i,int j)
{
    if(tot!=0)
    {
        switch(s[i][j])
        {
            case '/':
             up++;
             tot--;
             if(down!=0)
               funcdown();
             if(walk!=0)
               funcwalk();
            if(s[i][j+1]!=' ')
             func(i,j+1);
            else 
             func(i-1,j+1);
             break;
            case '\\':
             down++;
             tot--;
             if(up!=0)
              funcup();
             if(walk!=0)
              funcwalk();
             if(s[i][j+1]!=' '&&j+1<s[i].size())
              func(i,j+1);         
             else
              func(i+1,j+1);              
             break;
            case '_':
             walk++;
             tot--;
             if(up!=0)
              funcup();
             if(down!=0)
              funcdown();
             if(s[i-1][j+1]!=' '&&i-1>1&&j+1<s[i-1].size())
              func(i-1,j+1);
             else if(s[i+1][j+1]!=' '&&j+1<s[i+1].size())
              func(i+1,j+1);
             else
              func(i,j+1);
             break;
        }
    }
}
int main()
{
    int i,j;
    cin>>n;
    for(i=0;i<=n+1;i++)
     getline(cin,s[i]);
    for(i=2;i<=n+1;i++)
    {
        int m=s[i].size();
        for(j=0;j<m;j++)
        {
            if(s[i][j]!=' ')
             tot++;
        }
    }
    cout<<"Total Walk Distance = "<<tot<<endl;
    func(n+1,0);
    if(up!=0)
     funcup();
    if(down!=0)
     funcdown();
    if(walk!=0)
     funcwalk();
    return 0;    
}