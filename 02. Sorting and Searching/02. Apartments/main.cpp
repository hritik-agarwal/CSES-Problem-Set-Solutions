#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

int main(){

  ll n,m,k; cin>>n>>m>>k;
  vector<ll> des(n), avail(m);
  for(auto &x : des)  cin>>x;
  for(auto &x : avail)  cin>>x;

  sort(des.begin(), des.end());
  sort(avail.begin(), avail.end());

  ll i=0, j=0, ans=0;
  while(i<n && j<m){
    if(des[i]-k<=avail[j] && avail[j]<=des[i]+k){ans++; i++; j++;}
    else if(avail[j]>des[i]+k) i++;
    else j++;
  }

  cout<<ans;

  return 0;
}