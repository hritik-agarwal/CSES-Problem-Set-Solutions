#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  string s; cin>>s;
  int n = s.size();
  int len=1, max_len=1;
  for(int i=1;i<n;i++){
    if(s[i] == s[i-1]) len++;
    max_len = max(max_len, len);
    if(s[i] != s[i-1]) len = 1;
  }
  cout<<max_len;
  
  return 0;
}