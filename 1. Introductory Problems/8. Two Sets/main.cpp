#include<iostream>
#include<set>
using namespace std;

typedef long long ll;

int main(){

  ll n; cin>>n;
  ll sum = (n*(n+1))/2;

  if(sum%2!=0) cout<<"NO";
  else{

    // logic : take alternate numbers from back and front 
    // in array [1,2,3...n-1,n] until you get halfsum

    cout<<"YES\n";
    ll halfsum=0, i=1, j=n;
    set<int> ans;
    bool last=true;

    while(true){
      if(last){
        halfsum+=j;
        ans.insert(j);
        j--;
      } else{
        halfsum+=i;
        ans.insert(i);
        i++;
      }
      last = !last;
      if(halfsum == sum/2) break;
    }

    cout<<ans.size()<<endl;
    for(auto x : ans) cout<<x<<" "; 
    cout<<endl;
    cout<<n-ans.size()<<endl;
    for(int i=1;i<=n;i++) if(ans.find(i) == ans.end()) cout<<i<<" "; 
    cout<<endl;
  }

  return 0;
}