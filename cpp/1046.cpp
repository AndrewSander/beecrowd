#include <bits/stdc++.h>
using namespace std;

int main(){

    int hi, hf; cin >> hi >> hf;
    int cont =0;

    if (hi == hf){
        cout << "O JOGO DUROU " << 24 << " HORA(S)" << "\n";
    }

    else{
        while (hi != hf){
            hi++;
            cont++;
            if(hi > 23){
                hi=0;
            }
        }
    
        cout << "O JOGO DUROU " << cont << " HORA(S)" << "\n";
    }

}