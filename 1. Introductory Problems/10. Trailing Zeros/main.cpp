#include<iostream>
using namespace std;

typedef long long ll;

int main(){

  int n,ans=0,temp=5; cin>>n;
  while(true){
    if(n/temp==0) break;
    ans+=n/temp;
    temp*=5;
  }
  cout<<ans;

  return 0;
}