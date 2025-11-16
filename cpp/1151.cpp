#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1=0,n2=1,n; cin >> n;

    if (n == 1){
        cout << 0 << "\n";
    }
    else if (n == 2){
        cout << 1 << "\n";
    }
    else{
        cout << "0 1";
        for (int i=0; i<n-2; i++){
            int atual = n1 + n2;
            cout << " " << atual;
            n1 = n2;
            n2 = atual;
        }
        cout << "\n";
    }

}