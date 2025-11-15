#include <bits/stdc++.h>
using namespace std;

int main(){

    int in= 0;
    int out = 0;
    
    int n; cin >> n;

    for (int i=0; i<n; i++){
        int num; cin >> num;

        if (num >= 10 && num <= 20){
            in++;
        }
        else{
            out++;
        }
    }

    cout << in << " in" << "\n";
    cout << out << " out" << "\n";

}