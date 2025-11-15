#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b; cin >> a >> b;

    int maior = max(a,b);

    if (maior%(a+b-maior) == 0){
        cout << "Sao Multiplos" << "\n";
    }
    else{
        cout << "Nao sao Multiplos" << "\n";
    }

}