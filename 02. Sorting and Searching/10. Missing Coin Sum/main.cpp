#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

// logic - https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/

int main(){

  int n; cin>>n;
  vector<int> arr(n);
  for(auto &x : arr) cin>>x;

  sort(arr.begin(), arr.end());

  ll ans=1;
  for(int i=0;i<n;i++){
    if(arr[i]>ans) break;
    ans += (ll)arr[i];
  }
  cout<<ans;

  return 0;
}