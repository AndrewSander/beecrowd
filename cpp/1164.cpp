#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int num; cin >> num;
        int soma=0;
        for(int i=1; i<num; i++){
            if (num%i == 0){
                soma+=i;
            }
        }
        if (soma == num){
            cout << num << " eh perfeito" << "\n";
        }
        else{
            cout << num << " nao eh perfeito" << "\n";
        }
    }

}