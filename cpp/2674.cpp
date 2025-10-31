#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
  if (n == 1) return false;
  else if (n == 2) return true;
  else if (n%2 == 0) return false;
  for (int i=3; i*i<=n; i+=2){
    if (n%i == 0) return false;
  }
  return true;
}

int main(){
  int num;
  while(cin >> num){
    if (prime(num)){
      bool ok=true;
      string texto= to_string(num);
      for (auto x:texto){
        int n=x-'0';
        if (prime(n)==false){
          ok = false;
        }
      }
      (ok) ? cout << "Super" << "\n" : cout << "Primo" << "\n";
    }
    else{
      cout << "Nada" << "\n";
    }
  }
  
  return 0;
}