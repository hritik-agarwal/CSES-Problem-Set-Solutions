#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  
  ll median;
  sort(arr.begin(), arr.end());
  if(n&1) median = arr[n/2];
  else median = (ll(arr[n/2-1]) + ll(arr[n/2]))/2;

  ll cost=0;
  for(int i=0;i<n;i++){
    cost += (ll)abs(arr[i]-median);
  }
  cout<<cost;

  return 0;
}