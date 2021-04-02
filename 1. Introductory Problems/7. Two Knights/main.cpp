#include<iostream>
using namespace std;

typedef long long ll;

int main(){

  // example - 6x6
  // [x][x][y][y][x][x]
  // [x][x][y][y][x][x]
  // [y][y][z][z][y][y]
  // [y][y][z][z][y][y]
  // [x][x][y][y][x][x]
  // [x][x][y][y][x][x]

  int n; cin>>n;
  int val[] = {0,6,28,96,252}; 
  for(int i=1;i<=n;i++){
    if(i<=5) cout<<val[i-1]<<endl;
    else{
      ll total = i*i;
      ll cnt1 = 4*((total - 3) + 2*(total - 4) + (total - 5)); // refer to x cells
      ll cnt2 = 4*((i-4)*(total - 5) + (i-4)*(total - 7)); // refer to y cells
      ll cnt3 = (total - 8*i + 16)*(total - 9); // refer to z cells
      ll ans = cnt1 + cnt2 + cnt3;
      cout<<ans/2<<endl;
    }
  }

  return 0;
}