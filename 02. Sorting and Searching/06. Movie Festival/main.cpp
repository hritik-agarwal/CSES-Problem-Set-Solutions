#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

// sorting by end time
bool comp(pair<int,int> a, pair<int,int> b){
  if(a.second == b.second) return a.first<b.first;
  return a.second<b.second;
}

int main(){

  int n; cin>>n;
  vector<pair<int,int>> time;
  for(int i=0;i<n;i++){
    int a,b; cin>>a>>b;
    time.push_back({a,b});   
  }

  sort(time.begin(), time.end(), comp);

  // curr denotes the current movie I am watching
  int ans=1, currStartTime=time[0].first, currEndTime=time[0].second;
  for(int i=1;i<time.size();i++){
    int startTime = time[i].first;
    int endTime = time[i].second;
    if(startTime < currEndTime) continue; // can't watch this movie
    ans++;
    currStartTime = startTime;
    currEndTime = endTime;
  }
  cout<<ans;

  return 0;
}