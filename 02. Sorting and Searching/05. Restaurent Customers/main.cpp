#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<pair<int,int>> time;
  for(int i=0;i<n;i++){
    int a,b; cin>>a>>b;
    time.push_back({a,0});   
    time.push_back({b,1});   
  }

  sort(time.begin(), time.end());

  int curr=0, ans=0;
  for(int i=0;i<time.size();i++){
    if(time[i].second == 0) curr++;
    else curr--;
    ans = max(curr, ans);
  }
  cout<<ans;

  return 0;
}