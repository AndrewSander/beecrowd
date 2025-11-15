#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int num; cin >> num;

        if(num == 0){
            cout << "NULL" << "\n";
        }
        else{
            if (num > 0 && num%2 == 0){
                cout << "EVEN POSITIVE" << "\n";
            }
            else if (num > 0 && num%2 != 0){
                cout << "ODD POSITIVE" << "\n";
            }
            else if (num < 0 && num%2 == 0){
                cout << "EVEN NEGATIVE" << "\n";
            }
            else{
                cout << "ODD NEGATIVE" << "\n";
            }
        }
    }

}