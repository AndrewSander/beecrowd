#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a(1000);
    int n; cin >> n;
    vector<int> b(n);

    for(int i=1; i<n; i++){
        b[i]=b[i-1]+1;
    }

    int aux=0;

    for(int i=0; i<1000; i++){
        a[i] = b[aux];
        if (aux == n){
            aux = 0;
        }
        aux++;
        cout << "N[" << i << "] = " << a[i] << "\n";
    }

}