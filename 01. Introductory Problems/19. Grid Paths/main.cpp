#include<iostream>
#include<string>
#include<set>
#include<cstring>
using namespace std;

typedef long long ll;

int vis[8][8]; 
int ans=0;
string s;

bool ok(int i, int j){
   return i>=1&&i<=7&&j>=1&&j<=7&&!vis[i][j];
}

void dfs(int i, int j, int pos=0){
  if(i==7&&j==1){
    if(pos==48) ans++;
    return;
  }
  vis[i][j]=1;
  if ((s[pos] == '?' || s[pos] == 'U') && ok(i - 1, j) && !(!ok(i - 2, j) && ok(i - 1, j - 1) && ok(i - 1, j + 1))) dfs(i - 1, j, pos + 1); 
  if ((s[pos] == '?' || s[pos] == 'D') && ok(i + 1, j) && !(!ok(i + 2, j) && ok(i + 1, j - 1) && ok(i + 1, j + 1))) dfs(i + 1, j, pos + 1); 
  if ((s[pos] == '?' || s[pos] == 'L') && ok(i, j - 1) && !(!ok(i, j - 2) && ok(i - 1, j - 1) && ok(i + 1, j - 1))) dfs(i, j - 1, pos + 1); 
  if ((s[pos] == '?' || s[pos] == 'R') && ok(i, j + 1) && !(!ok(i, j + 2) && ok(i - 1, j + 1) && ok(i + 1, j + 1))) dfs(i, j + 1, pos + 1);
  vis[i][j]=0;
}

int main(){

  cin>>s;
  dfs(1,1);
  cout<<ans;
  return 0;
}