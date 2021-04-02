#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){

  int n; cin>>n;
  vector<string> arr1, arr2;

  // creating arr1 for n = 1
  arr1.push_back("0");
  arr1.push_back("1");

  // Now for n>1 
  for(int j=2;j<=n;j++){
    arr2 = arr1;
    reverse(arr2.begin(), arr2.end());
    for(int i=0;i<arr1.size();i++) arr1[i] = "0" + arr1[i];
    for(int i=0;i<arr2.size();i++) arr2[i] = "1" + arr2[i];
    for(int i=0;i<arr2.size();i++) arr1.push_back(arr2[i]);
  }

  for(auto str : arr1) cout<<str<<endl;
  return 0;
}