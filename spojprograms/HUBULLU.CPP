/*
kamalsam
*/
#include<stdio.h>
#include<iostream>
using namespace std;
#define ll long long int
int main(){
  ll n;
  int t;
  scanf("%d",&t);
  bool chance;
  while(t--){
scanf("%lld",&n);
        cin >> chance;
        if( !chance ) cout << "Airborne wins."<< endl;
        else cout << "Pagfloyd wins." << endl;
  }
  return 0;
}