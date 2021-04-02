#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  ll cost = 0;
  for(int i=1;i<n;i++){
    if(arr[i] >= arr[i-1]) continue;
    cost += ll(arr[i-1] - arr[i]);
    arr[i] = arr[i-1];
  }
  cout<<cost;
  
  return 0;
}