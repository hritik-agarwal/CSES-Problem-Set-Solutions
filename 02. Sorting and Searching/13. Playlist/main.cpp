#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<int> arr(n);
  for(auto &x : arr) cin>>x;

  // Using Sliding Window Technique [start...end-1] -> denotes the current window
  int maxlen=1, currlen=1, start=0;
  set<int> inWindow; inWindow.insert(arr[0]);

  for(int end=1;end<n;end++){
    if(!inWindow.count(arr[end])){
      inWindow.insert(arr[end]); currlen++;
    } else{
      maxlen = max(maxlen, currlen);
      while(arr[start] != arr[end]){
        inWindow.erase(arr[start]); start++; currlen--;
      }
      start++;
    }
  }
  maxlen = max(maxlen, currlen);
  cout<<maxlen;

  return 0;
}