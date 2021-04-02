#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<int> arr(n); 
  for(int i=0;i<n;i++) cin>>arr[i];

  ll max_sum=LLONG_MIN, curr_sum=0;
  for(int i=0;i<n;i++){
    curr_sum += (ll)arr[i];
    max_sum = max(max_sum, curr_sum);
    curr_sum = max(curr_sum,0ll);
  }
  cout<<max_sum;

  return 0;
}