#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2; cin >> n1 >> n2;
    int aux=1;

    for(int i=1; i<=n2; i++){
        if(aux == n1){
            cout << i << "\n";
            aux = 0;
        }
        else{
            cout << i << " ";
        }
        aux++;
    }

}