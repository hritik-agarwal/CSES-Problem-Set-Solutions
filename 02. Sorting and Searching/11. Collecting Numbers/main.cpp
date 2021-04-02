#include<iostream>
#include<vector>
#include<set>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<int> arr(n);
  for(auto &x : arr) cin>>x;

  set<int> st;
  for(int i=0;i<n;i++){
    if(st.find(arr[i]-1) == st.end()){
      st.insert(arr[i]);
    } else{
      st.erase(arr[i]-1);
      st.insert(arr[i]);
    }
  }
  cout<<st.size();

  return 0;
}