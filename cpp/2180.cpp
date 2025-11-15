#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool prime(ull n){
  if (n == 1) return false;
  else if (n == 2) return true;
  else if (n%2 == 0) return false;
  for (int i=3; i*i<=n; i+=2){
    if (n%i == 0) return false;
  }
  return true;
}

int main(){
    ull dist= 60000000;
    ull n,soma=0; cin >> n;
    int t= 10;
    
    while(t > 0){
        if (prime(n)){
            t--;
            soma+= n;
        } 
        n++;
    }

    ull horas= dist/soma;
    ull dias= dist/ (soma * 24);

    cout << soma << " km/h" << "\n";
    cout << horas << " h / " << dias << " d" << "\n"; 


}