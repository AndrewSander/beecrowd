#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<double>a(3);
    for (int i=0; i<3; i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    if (a[0] >= a[1] + a[2]){
        cout << "NAO FORMA TRIANGULO" << "\n";
    }
    else{
        if (pow(a[0],2) == (pow(a[1],2) + pow(a[2],2))){
            cout << "TRIANGULO RETANGULO" << "\n";
        }
        else if (pow(a[0],2) > (pow(a[1],2) + pow(a[2],2))){
            cout << "TRIANGULO OBTUSANGULO" << "\n";
        }
        else if (pow(a[0],2) < (pow(a[1],2) + pow(a[2],2))){
            cout << "TRIANGULO ACUTANGULO" << "\n";
        }
        if (a[0] == a[1] && a[1] == a[2]){
            cout << "TRIANGULO EQUILATERO" << "\n";
        }
        else if(not(a[0] != a[1] && a[1] != a[2])){
            cout << "TRIANGULO ISOSCELES" << "\n";
        }
    }

}