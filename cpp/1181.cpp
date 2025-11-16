#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<double>> a(12,vector<double>(12));
    
    int l; cin >> l;

    char op; cin >> op;

    for(auto &linha:a){
        for(auto &x:linha){
            cin >> x;
        }
    }

    double soma=0;
    
    for(int i=0; i<12; i++){
        soma+=a[l][i];
    }
    
    double media=soma/12;

    if(op == 'S'){
        cout << fixed << setprecision(1) << soma << "\n";
    }
    else{
        cout << fixed << setprecision(1) << media << "\n";
    }


}