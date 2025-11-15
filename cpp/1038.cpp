#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<double> a= {4.0,4.50,5.0,2.0,1.50};
    int b,c; cin >> b >> c;
    double resp= a[b-1] * c;

    cout << "Total: R$ " << fixed << setprecision(2) << resp << "\n";


}