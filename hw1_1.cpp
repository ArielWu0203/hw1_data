#include<iostream>
#include<cstdio>
using namespace std;

int Bino(int n,int k) {
  if(k==1) {
    return n/k;
  }
  return n*Bino(n-1,k-1)/k;
}
int main() {
  int n,k;
  cin>>n>>k;
  cout<<Bino(n,k)<<endl;
  return 0;
}
