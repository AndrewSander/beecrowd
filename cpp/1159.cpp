#include <bits/stdc++.h>
using namespace std;

int main(){

    int x; cin >> x;
    
    while(x != 0){
        int aux=5;
        int soma = 0;
        while(aux > 0){
            if(x % 2 == 0){
                soma+=x;
                aux--;
            }
            x++;
        }
        cout << soma << "\n";
        cin >> x;
    }

}