#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<ll> arr(n);
  for(auto &x : arr) cin>>x;

  ll min_diff=LLONG_MAX;
  
  for(int i=0;i<(1<<n);i++){
    ll diff = 0;
    for(int j=0;j<n;j++){
      if(i&(1<<j)) diff+=arr[j];
      else diff-=arr[j];
    }
    min_diff = min(min_diff, abs(diff));
  }
  cout<<min_diff<<endl;

  return 0;
}