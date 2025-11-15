#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
string base32(ll a){
    string numeros= "0123456789ABCDEFGHIJKLMNOPQRSTUV";
    string final="";
    if (a == 0){
        final+="0";
    }
    while ( a != 0){
        ll resto = a%32;
        a = a/32;
        final += numeros[resto];
    }
    reverse(final.begin(), final.end());
    return final;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    while ( cin >> a ){
        if (a == 0){
            cout << 0 << "\n";
            break;
        }
        cout << base32(a) << "\n";
    }
}