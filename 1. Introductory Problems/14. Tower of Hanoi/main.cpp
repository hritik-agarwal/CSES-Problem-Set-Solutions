#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

// logic -
// no_of_moves(n disks) = no_of_moves(n-1 disks) + 1
// moving n disks from a to c = move top (n-1) disks from a to b 
//                            + move nth disk from a to c
//                            + move (n-1) disks from b to c 

// below a -> from tower, b -> extra tower, c -> to tower
void printMoves(int  n, int a, int b, int c){
  if(n==1)  cout<<a<<" "<<c<<endl; // base case
  else{
    printMoves(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    printMoves(n-1,b,a,c);
  }
}

int main(){

  int n; cin>>n;
  vector<int> moves(n+1);
  moves[1]=1;
  for(int i=2;i<=n;i++) moves[i] = 2*moves[i-1]+1;
  cout<<moves[n]<<endl;
  printMoves(n,1,2,3);

  return 0;
}