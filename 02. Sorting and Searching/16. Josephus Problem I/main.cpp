#include<iostream>
#include<set>
#include<vector>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  set<int> st;
  for(int i=1;i<=n;i++) st.insert(i);
  int start=1; // 0->from 1st element , 1->from 2nd element

  while(true){

    if(st.empty()) break;
    if(st.size()==1){cout<<*(st.begin()); break;}

    auto it=st.begin();
    if(start) it++;
    vector<int> del; // elements to be deleted in current iteration

    while(true){
      cout<<*it<<" ";
      del.push_back(*it); it++;
      if(it==st.end()){start=1; break;} it++;
      if(it==st.end()){start=0; break;}
    }

    for(auto elem : del) st.erase(elem);

  }
  return 0;
}