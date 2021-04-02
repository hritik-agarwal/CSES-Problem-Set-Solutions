#include<iostream>
#include<vector>
#include<string>
using namespace std;

typedef long long ll;

ll ans = 0;

bool isSafe(int row, int col, vector<string> &board){

  // vertical check
  for(int i=0;i<row;i++) if(board[i][col]=='Q') return false;

  // left diagonal check
  int i=row-1, j=col-1;
  while(i>=0 && j>=0){
    if(board[i][j]=='Q') return false;
    i--; j--;
  }

  // right diagonal check
  i=row-1; j=col+1;
  while(i>=0 && j<=7){
    if(board[i][j]=='Q') return false;
    i--; j++;
  }

  return true;
}

void possibleWays(int row, vector<string> &board){
  for(int i=0;i<8;i++){
    if(board[row][i]=='.' && isSafe(row, i, board)){
      if(row == 7){
        ans++;
        return;
      } else{
        board[row][i]='Q';
        possibleWays(row+1,board);
        board[row][i]='.';
      }
    }
  }
}

int main(){

  vector<string> board(8);
  for(int i=0;i<8;i++) cin>>board[i];

  possibleWays(0,board);
  cout<<ans<<endl;

  return 0;
}