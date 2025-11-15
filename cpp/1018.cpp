#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int aux = n;
    vector<int> a = {100,50,20,10,5,2,1};
    vector<int> b(7);
    

    for(int i=0; i<7; i++){
        b[i] = n / a[i];
        n = n% a[i]; 
    }

    cout << aux << "\n";

    for (int i=0; i<7; i++){
        cout << b[i] << " nota(s) de R$ " << a[i] << ",00" << "\n";
    }

}