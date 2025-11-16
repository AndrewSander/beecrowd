#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,z; cin >> x >> z;
    
    while(z <= x){
        cin >> z;
    }

    int cont =2;

    while (x<= z){
        x+=x+1;
        cont++;
    }

    cout << cont << "\n";

}