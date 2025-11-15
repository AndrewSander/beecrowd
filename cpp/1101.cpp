#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a(2);

    while (true){
        cin >> a[0];
        cin >> a[1];
        int soma=0;

        if(a[0] <= 0 || a[1] <= 0){
            break;
        }

        sort(a.begin(), a.end());

        for(int i=a[0]; i<= a[1]; i++){
            soma+=i;
            cout << i << " ";
        }

        cout << "Sum=" << soma << "\n";
    }   

}