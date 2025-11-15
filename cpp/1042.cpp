#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a(3);
    
    for (int i=0; i<3; i++){
        cin >> a[i];
    }

    vector<int> b = a;

    sort(a.begin(), a.end());

    for (auto x:a){
        cout << x << "\n";
    }

    cout << "\n";

    for (auto x:b){
        cout << x << "\n";
    }

}