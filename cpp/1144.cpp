#include <bits/stdc++.h>
using namespace std;

int main(){

   int n; cin >> n;
   int n1=1;
   
   for(int i=0; i<n; i++){
    cout << n1 << " " << n1 * n1 << " " << n1 * n1 * n1 << "\n";
    cout << n1 << " " << n1 * n1 + 1 << " " << n1 * n1 * n1 + 1 << "\n";
    n1++;
   }

}