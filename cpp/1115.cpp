#include <bits/stdc++.h>
using namespace std;

int main(){

    while(true){
        int n1,n2; cin >> n1 >> n2;

        if(n1 == 0 || n2 == 0){
            break;
        }
        if (n1 > 0 && n2 > 0){
            cout << "primeiro" << "\n";
        }
        else if (n1 < 0 && n2 > 0){
            cout << "segundo" << "\n";
        }
        else if (n1 < 0 && n2 < 0){
            cout << "terceiro" << "\n";      
        }
        else{
            cout << "quarto" << "\n";
        }
    }   

}