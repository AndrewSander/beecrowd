#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> a(n);
    
    for(auto &x:a) cin >> x;
    
    int mini=a[0];
    int idx=0;

    for(int i=0; i<a.size(); i++){
        if(a[i] < mini){
            idx = i;
        }
        mini = min(mini,a[i]);
    }

    cout << "Menor valor: " << mini << "\n";
    cout << "Posicao: " << idx << "\n";

}