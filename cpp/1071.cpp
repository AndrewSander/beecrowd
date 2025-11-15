#include <bits/stdc++.h>
using namespace std;

int main(){

    int soma = 0;
    vector<int>a(2);
    cin >> a[0];
    cin >> a[1];

    sort(a.begin(), a.end());

    for(int i=a[0]+1; i<a[1]; i++){
        if (i%2!=0){
            soma+=i;
        }
    }

    cout << soma << "\n";

}