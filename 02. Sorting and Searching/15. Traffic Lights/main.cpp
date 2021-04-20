#include<iostream>
#include<set>
using namespace std;

typedef long long ll;

int main(){

  int len, n; cin>>len>>n;
  int ans=len;
  multiset<int> pointer, lengths;
  pointer.insert(0);
  pointer.insert(len);
  lengths.insert(len);

  for(int i=0;i<n;i++){
    int p; cin>>p;
    auto it = pointer.upper_bound(p);
    int upper = *it;
    it--; 
    int lower = *it;
    pointer.insert(p);
    it = lengths.lower_bound(upper-lower);
    lengths.erase(it);
    lengths.insert(p-lower);
    lengths.insert(upper-p);
    cout<<*(lengths.rbegin())<<" ";
  }

  return 0;
}