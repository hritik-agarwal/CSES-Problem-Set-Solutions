#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  int n,m; cin>>n>>m;
  vector<int> cusPrice(m);
  multiset<int> tktPrice; 

  for(int i=0;i<n;i++){
    int x; cin>>x; tktPrice.insert(x);
  }

  for(int i=0;i<m;i++) cin>>cusPrice[i];

  for(int price : cusPrice){
    auto it = tktPrice.upper_bound(price);
    if(it == tktPrice.begin()) cout<<-1<<endl;
    else{
      it--;
      cout<<*it<<endl;
      tktPrice.erase(it);
    }
  }

  return 0;
}