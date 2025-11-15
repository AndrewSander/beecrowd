#include <bits/stdc++.h>
using namespace std;

bool isTriangle(double a, double b, double c){
    double maior = max(a,max(b,c));
    if (maior < a + b + c - maior){
        return true;
    }
    return false;
}

int main(){

    double a,b,c; cin >> a >> b >> c;

    if(isTriangle(a,b,c)){
        cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << "\n";
    }
    else{
        cout << "Area = " << fixed << setprecision(1) << ((a+b)*c)/2 << "\n";
    }


}