#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int aux= n;
    
    while(aux > 1){
        aux--;
        n*=aux;
    }

    cout << n << "\n";

}