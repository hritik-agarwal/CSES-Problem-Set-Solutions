#include<iostream>
#include<string>
using namespace std;

typedef long long ll;

// logic -
// step 1 - Find the range (i.e. if kth posn belongs to say 2 digit nos range (10 to 99))
// step 2 - Find starting and ending posn of the range (i.e. first digit posn of first no & last digit posn of last no)
// step 3 - Binary search on which no in the range contains the kth posn
// step 4 - Print the digit at kth posn

int main(){

  int q; cin>>q;
  ll k; 

  while(q--){
    cin>>k;

    // step 1
    ll a = 1, b = 9, digit = 1, posn=1;
    while(posn + (b-a+1)*digit - 1 < k){
      posn += (b-a+1)*digit;
      a = a*10;
      b = b*10+9;
      digit++;
    }

    // step 2
    ll x = posn;                       
    ll y = posn+(b-a+1)*digit-1;      

    // step 3
    ll l=a, m, r=b, xm, ym;
    while(l<=r){
      m = l+(r-l)/2;
      // find starting and ending posn of current number
      xm = x + (m-a)*digit;      
      ym = y - (b-m)*digit;     
      if(xm<=k && k<=ym) break;
      else if(k<xm) r=m-1;
      else l=m+1;
    }

    // step 4
    string num = to_string(m);
    cout<<num[k-xm]<<endl;
  }

  return 0;
}