#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
    
    ull num; 

    while(cin >> num){
        ull resto = 1%num;
        ull cont = 1;

        while (resto != 0){
            cont++;
            resto= (resto * 10 + 1) % num;
        }

        cout << cont << "\n";
    }

}