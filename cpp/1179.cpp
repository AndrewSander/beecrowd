#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>pares;
    vector<int>impares;
    for(int i=0; i<15; i++){

        
        if(pares.size() == 5){
            for(int j=0; j<5; j++){
                cout << "par[" << j << "] = " << pares[j] << "\n";
            }
            pares.clear();
        }
        if(impares.size() == 5){
            for(int j=0; j<5; j++){
                cout << "impar[" << j << "] = " << impares[j] << "\n";
            }
            impares.clear();
        }
        
        int num; cin >> num;

        if (num % 2 == 0){
            pares.push_back(num);
        }
        else{
            impares.push_back(num);
        }
    }   
    for(int i=0; i<impares.size(); i++){
        cout << "impar[" << i << "] = " << impares[i] << "\n";
    }
    for(int i=0; i<pares.size(); i++){
        cout << "par[" << i << "] = " << pares[i] << "\n";
    }



}