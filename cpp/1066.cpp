#include <bits/stdc++.h>
using namespace std;

int main(){

    int pares=0;
    int impares=0;
    int positivos=0;
    int negativos=0;
    
    for(int i=0; i<5; i++){
        int num; cin >> num;

        if(num%2==0){
            pares++;
        }
        else{
            impares++;
        }
        if(num == 0){

        }
        else if (num > 0){
            positivos++;
        }
        else{
            negativos++;
        }
    }

    cout << pares << " valor(es) par(es)" << "\n";
    cout << impares << " valor(es) impar(es)" << "\n";
    cout << positivos << " valor(es) positivo(s)" << "\n";
    cout << negativos << " valor(es) negativo(s)" << "\n";

}