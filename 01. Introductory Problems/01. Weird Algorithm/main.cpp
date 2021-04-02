#include<iostream>
using namespace std;

typedef long long ll;

int main(){

  ll n; cin>>n;
  do{
    cout<<n<<" ";
    if(n==1) break;
    if(n&1) n = 3*n+1;
    else n /= 2;
  } while(true);

  return 0;
}