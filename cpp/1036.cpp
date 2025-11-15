#include <bits/stdc++.h>
using namespace std;

int main(){

    double a,b,c; cin >> a >> b >> c;

    double delta = pow(b,2)-4*a*c;

    if (delta < 0 || a == 0){
        cout << "Impossivel calcular" << "\n";
        return 0;
    }
    
    double r1 = (-(b) + sqrt(delta))/(2*a);
    double r2 = (-(b) - sqrt(delta))/(2*a);

    cout << "R1 = " << fixed << setprecision(5) << r1 << "\n";
    cout << "R2 = " << fixed << setprecision(5) << r2 << "\n";


}