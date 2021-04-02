#include<iostream>
using namespace std;

typedef long long ll;

// finds (x^y)%mod
int modPow(int x, int y, int mod){
  if(y==1) return x;
  if(y==0) return 1;
  ll temp = (ll)modPow(x, y/2, mod);
  temp = (temp * temp)%mod;
  if(y%2!=0) temp = (temp * x)%mod;
  return (int)(temp+mod)%mod;
}

int main(){

  int n; cin>>n;
  cout<<modPow(2,n,1000000007);

  return 0;
}