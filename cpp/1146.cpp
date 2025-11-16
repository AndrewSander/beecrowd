#include <bits/stdc++.h>
using namespace std;

int main(){

    int num; cin >> num;   

    while(num != 0){
        for(int i=1; i<num; i++){
            cout << i << " ";
        }
        cout << num << "\n";
        cin >> num;
    }

}