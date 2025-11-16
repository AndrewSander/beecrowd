#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a(10);
    
    int num; cin >> num;
    a[0] = num;

    cout << "N[0] = " << num << "\n";

    for(int i=1; i<10; i++){
        a[i] = a[i-1] * 2;
        cout << "N[" << i << "] = " << a[i] << "\n";
    }

}