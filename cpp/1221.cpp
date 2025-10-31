#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
  if (n == 1) return 0;
  else if (n == 2) return 1;
  else if (n%2 == 0) return 0;
  for (int i=3; i*i<=n; i+=2){
    if (n%i == 0) return 0;
  }
  return 1;
}

int main(){
  int n; cin >> n;
  for (int  i=0; i<n; i++){
    int num; cin >> num;
    (prime(num)) ? cout << "Prime" << "\n" : cout << "Not Prime" << "\n";
  }
  
  
  return 0;
}