#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int horas = n/3600;
    int minutos = (n%3600)/60;
    int segundos = (n%3600)%60;

    cout << horas << ":" << minutos << ":" << segundos << "\n";

}