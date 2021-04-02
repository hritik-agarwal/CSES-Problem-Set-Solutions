#include<iostream>
using namespace std;

typedef long long ll;

int main(){

  ll n,sum; cin>>n;
  sum = (n*(n+1))/2;
  n--;
  while(n--){
    int x; cin>>x;
    sum -= x;
  }
  cout<<sum;

  return 0;
}