#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

typedef long long ll;

int main(){

  int t; cin>>t;
  while(t--){
    int r,c; cin>>r>>c;
    ll a = max(r,c);
    ll b = min(r,c);
    if(r<=c) cout<<(a%2!=0 ? a*a-b+1 : a*a - (2*a-1) + b)<<endl;
    else cout<<(a%2==0 ? a*a-b+1 : a*a - (2*a-1) + b)<<endl;
  }

  return 0;
}