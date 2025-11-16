#include <bits/stdc++.h>
using namespace std;

int main(){

    double soma=0.0;
    double cont=0.0;
    double idade;

    while(true){
        cin >> idade;

        if (idade < 0){
            break;
        }

        cont++;
        soma+=idade;
    }   

    double media = soma/cont;

    cout << fixed << setprecision(2) << media << "\n";

}