#include<iostream>
#include<vector>
#include<map>
using namespace std;

typedef long long ll;

int main(){

  int n,x; cin>>n>>x;
  vector<int> arr(n);
  map<int,int> mp;
  for(auto &a : arr) cin>>a;

  for(int i=0;i<n;i++){
    if(mp.find(x-arr[i]) != mp.end()){
      cout<<mp[x-arr[i]]+1<<" "<<i+1; 
      return 0;
    }
    mp[arr[i]]=i;
  }
  cout<<"IMPOSSIBLE";

  return 0;
}