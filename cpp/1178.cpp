#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<long double>a(100);
    
    long double num; cin >> num;

    a[0] = num;

    for(long long i=1; i<100; i++){
        a[i] = a[i-1]/2;
    }

    for(long long i=0; i<100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << a[i] << "\n";
    }

}