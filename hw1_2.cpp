#include<iostream>
#include<cstdio>
using namespace std;

int count=0;

void Hanoi(int n,char a,char b,char c) {
  if(n==1) {
    count++;
    cout<<"Move disk "<<n<<"from "<<a<<" to "<<c<<endl;
  }
  else {
    Hanoi(n-1,a,c,b);
    count++;
    cout<<"Move disk "<<n<<"from "<<a<<" to "<<c<<endl;
    Hanoi(n-1,b,a,c);
  }
  return;
}
int main() {
  int n;
  cout<<"Desk:";
  cin>>n;
  Hanoi(n,'A','B','C');
  cout<<"Tatal steps:"<<count<<endl;
  return 0;
}

