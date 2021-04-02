#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  ll n,x; cin>>n>>x;
  vector<ll> wt(n);
  for(auto &x : wt) cin>>x;

  sort(wt.begin(), wt.end());

  int i=0, j=n-1, ans=0;
  while(i<=j){
    if(wt[i]+wt[j] <= x){
      ans++; i++; j--;
    } else{
      ans++; j--;
    }
  }
  cout<<ans;

  return 0;
}