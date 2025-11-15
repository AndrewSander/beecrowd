#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a= {61,71,11,21,32,19,27,31};
    vector<string>b={"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};  

    int ddd; cin >> ddd;

    for(int i=0; i<a.size(); i++){
        if (a[i] == ddd){
            cout << b[i] << "\n";
            return 0;
        }
    }
    
    cout << "DDD nao cadastrado" << "\n";
}