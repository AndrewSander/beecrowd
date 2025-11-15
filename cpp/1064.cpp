#include <bits/stdc++.h>
using namespace std;

int main(){

    int cont= 0;
    double soma= 0;

    for(int i=0; i<6; i++){
        double num; cin >> num;
        if (num >= 0){
            cont++;
            soma+=num;
        }
    }

    cout << cont << " valores positivos" << "\n";
    cout << fixed << setprecision(1) << soma/cont << "\n";


}