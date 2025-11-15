#include <bits/stdc++.h>
using namespace std;

int main(){

    double n; cin >> n;

    int valor= round(n*100);

    vector<int> a = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    vector<int> b(12);
    

    for(int i=0; i<12; i++){
        b[i] = valor / a[i];
        valor %= a[i]; 
    }

    cout << "NOTAS:" << "\n";

    for (int i=0; i<12; i++){
        if (i < 6){
            cout << fixed << setprecision(0) << b[i] << " nota(s) de R$ " << fixed << setprecision(2) << a[i]/100.0  << "\n";
        }
        if (i == 6){
            cout << "MOEDAS:" << "\n";
            cout << fixed << setprecision(0) << b[i] << " moeda(s) de R$ " << fixed << setprecision(2) << a[i]/100.0  << "\n";
        }
        else if (i > 6){
            cout << fixed << setprecision(0) << b[i] << " moeda(s) de R$ " << fixed << setprecision(2) << a[i]/100.0  << "\n";

        }
    }

}