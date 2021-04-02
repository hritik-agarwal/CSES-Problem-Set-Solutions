#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  string s; cin>>s;
  int freq[255] = {0};
  for(char ch : s) freq[int(ch)]++;

  int oddfreq=0, oddchar;
  for(int i=0;i<255;i++) if(freq[i]&1) {oddfreq++; oddchar=char(i);}

  // if more than 1 odd freq char, then palindrome not possible
  if(oddfreq>1) cout<<"NO SOLUTION"; 
  else{

    string ans="";

    // adding half of even freq characters
    for(int i=0;i<255;i++){
      int sz = freq[i];
      char ch = char(i);
      if(sz%2==0){
        string temp="";
        for(int j=0;j<sz/2;j++) temp += ch;
        ans += temp;
      }
    }

    // creating other half of even freq characters in reverse order
    string rev = ans;
    reverse(rev.begin(), rev.end());

    // adding odd freq character(if any)
    string temp="";
    for(int j=0;j<freq[int(oddchar)];j++) temp += oddchar;
    ans += temp;

    // adding other half of even freq characters
    ans += rev;
    cout<<ans;
  }

  return 0;
}