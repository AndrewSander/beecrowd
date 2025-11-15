#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int soma=0;
        vector<int>a(2);
        cin >> a[0];
        cin >> a[1];

        sort(a.begin(), a.end());

        for(int j=a[0]+1; j<a[1]; j++){
            if (j%2 != 0){
                soma+=j;
            }
        }
        cout << soma << "\n";
    }

}