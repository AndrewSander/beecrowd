#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int num; cin >> num;
        bool ok=true;
        if (num == 1){
            cout << "1 nao eh primo" << "\n";
        }
        else{
            for(int i=2; i<num; i++){
                if (num%i == 0){
                    cout << num << " nao eh primo" << "\n";
                    ok = false;
                    break;
                }
            }
            if (ok) cout << num << " eh primo" << "\n";

        }
    }

}