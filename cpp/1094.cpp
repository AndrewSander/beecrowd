#include <bits/stdc++.h>
using namespace std;

int main(){

    int coelhos= 0;
    int sapos = 0;
    int ratos = 0;
    double total = 0.0;
    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int num; cin >> num;
        char letra; cin >> letra;
        if (letra == 'C'){
            coelhos += num;
        }
        else if (letra == 'S'){
            sapos+=num;
        }
        else{
            ratos+=num;
        }
        total+=num;
    }

    double pcoelhos = (coelhos / total) * 100;
    double pratos = (ratos / total) * 100;
    double psapos = (sapos / total) * 100;

    cout << "Total: " << total << " cobaias" << "\n";
    cout << "Total de coelhos: " << coelhos << "\n";
    cout << "Total de ratos: " << ratos << "\n";
    cout << "Total de sapos: " << sapos << "\n";
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << pcoelhos << " %" << "\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << pratos << " %" << "\n";
    cout << "Percentual de sapos: " << fixed << setprecision(2) << psapos << " %" << "\n";

}