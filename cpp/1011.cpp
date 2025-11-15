#include <bits/stdc++.h>
using namespace std;

int main(){

    double pi = 3.14159;
    int raio; cin >> raio;

    double resp= (4.0/3) * pi * pow(raio,3);

    cout << "VOLUME = " << fixed << setprecision(3) << resp << "\n";

}