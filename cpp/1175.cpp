#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a(20);
    
    for(int i=0; i<20; i++){
        cin >> a[i];
    }

    reverse(a.begin(), a.end());

    for(int i=0; i<20; i++){
        cout << "N[" << i << "] = " << a[i] << "\n";
    }

}