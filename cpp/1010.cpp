#include <bits/stdc++.h>
using namespace std;

int main(){

    int a1,b1; cin >> a1 >> b1;
    double c1; cin >> c1;

    int a2,b2; cin >> a2 >> b2;
    double c2; cin >> c2;

    double total = b1 * c1 + b2 * c2;

    cout << "VALOR A PAGAR: R$ " << fixed <<setprecision(2) << total << "\n";


}