#include<iostream>
#include<map>
using namespace std;

typedef long long ll;

int main(){

  int n,x; cin>>n;
  map<int,bool> mp;
  for(int i=0;i<n;i++){
    cin>>x;
    mp[x]=true;
  }
  cout<<mp.size();

  return 0;
}