#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int anos = n/365;
    int meses = (n%365)/30;
    int dias = (n%365)%30;

    cout << anos << " ano(s)" << "\n";
    cout << meses << " mes(es)" << "\n";
    cout << dias << " dia(s)" << "\n";

}