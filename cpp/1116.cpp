#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i=0; i<n; i++){
        double n1,n2; cin >> n1 >> n2;

        if(n2 == 0){
            cout << "divisao impossivel" << "\n";
        }
        else{
            cout << fixed << setprecision(1) << n1/n2 << "\n";
        }
    }

}