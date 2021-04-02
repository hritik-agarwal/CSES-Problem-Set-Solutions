#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  string s; cin>>s;
  vector<string> ans;
  sort(s.begin(), s.end());

  do{
    ans.push_back(s);
  } while(next_permutation(s.begin(), s.end()));

  cout<<ans.size()<<endl;
  for(auto str : ans) cout<<str<<endl;

  return 0;
}