#include <bits/stdc++.h>
using namespace std;

int main(){

    double n; cin >> n;
    
    if (n >= 0 && n <= 2000){
        cout << "Isento" << "\n";
    }
    else if (n > 2000 && n <= 3000){
        double rest = n - 2000;
        cout << "R$ " << fixed << setprecision(2) << rest*8/100 << "\n";
    }
    else if (n > 3000 && n <= 4500){
        double rest = n-2000;
        rest -= 1000;
        cout << "R$ " << fixed << setprecision(2) << (rest*18/100) + 1000*8/100 << "\n";
    }
    else{
        double rest = n-2000;
        rest -= 2500;
        cout << "R$ " << fixed << setprecision(2) << (rest*28/100) + (1000*8/100) + (1500*18/100) << "\n";
    }

}