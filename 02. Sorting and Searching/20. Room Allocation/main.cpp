#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

typedef long long ll;

bool comp(vector<int> a, vector<int> b){
  if(a[0]==b[0]) return a[1]<b[1];
  return a[0]<b[0];
}

int main(){

  int n; cin>>n;
  vector<vector<int>> arr(n, vector<int> (3));
  for(int i=0;i<n;i++){
    int x, y; cin>>x>>y;
    arr[i] = {x,y,i};
  }

  // Sort according to arrival time
  sort(arr.begin(), arr.end(), comp);

  // Using set for room allocation {Departure_Time, Room_No}
  set<pair<int,int>> rooms;
  vector<int> ans(n);

  // Room Allocation Code
  for(int i=0;i<n;i++){
    int arrival=arr[i][0], depart=arr[i][1], id=arr[i][2];
    // if all rooms are empty
    if(rooms.empty()){rooms.insert({depart, 1}); ans[id]=1;}
    else{
      // Search for a room in which departure time >= arrival time of current customer
      auto it = rooms.lower_bound({arrival,1});
      // If no room exist with lesser departure time
      if(it == rooms.begin()){
        rooms.insert({depart, rooms.size()+1}); ans[id]=rooms.size();
      } else{ // else if exists then just shift the new customer to room with least departure time
        auto p = *(rooms.begin());
        rooms.erase(rooms.begin()); rooms.insert({depart,p.second}); ans[id]=p.second;
      }
    }
  }
  cout<<rooms.size()<<endl;
  for(int i=0;i<n;i++) cout<<ans[i]<<" ";
  return 0;
}