#include <bits/stdc++.h>
using namespace std;

int main(){

    double n; cin >> n;
    
    if (n >= 0 && n <= 400){
        double res = n*15/100;
        n+= n*15/100;
        cout << "Novo salario: " << fixed << setprecision(2) << n << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << res << "\n";
        cout << "Em percentual: 15 %" << "\n";

    }
    else if (n > 400 && n <= 800){
        double res = n*12/100;
        n+=n*12/100;
        cout << "Novo salario: " << fixed << setprecision(2) << n << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << res << "\n";
        cout << "Em percentual: 12 %" << "\n";
    }
    else if (n > 800 && n <= 1200){
        double res = n*10/100;
        n+=n*10/100;
        cout << "Novo salario: " << fixed << setprecision(2) << n << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << res << "\n";
        cout << "Em percentual: 10 %" << "\n";
    }
    else if(n > 1200 && n <= 2000){
        double res = n*7/100;
        n+= n*7/100;
        cout << "Novo salario: " << fixed << setprecision(2) << n << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << res << "\n";
        cout << "Em percentual: 7 %" << "\n";
    }
    else{
        double res = n*4/100;
        n+= n*4/100;
        cout << "Novo salario: " << fixed << setprecision(2) << n << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << res << "\n";
        cout << "Em percentual: 4 %" << "\n";
    }

}