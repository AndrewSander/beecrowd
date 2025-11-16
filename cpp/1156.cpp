#include <bits/stdc++.h>
using namespace std;

int main(){

    double s=1;
    double numerador=3;
    double denominador = 2;
    
    while (numerador <= 39){
        s+=numerador/denominador;
        numerador+=2;
        denominador*=2;
    }

    cout << fixed << setprecision(2) << s << "\n";

}