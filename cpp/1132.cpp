#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2; cin >> n1 >> n2;

    vector<int>a={n1,n2};
    sort(a.begin(),a.end());

    n1= a[0];
    n2= a[1];

    int soma=0;
    
    for(int i=n1; i<= n2; i++){
        if (i%13 != 0){
            soma+=i;
        }
    }

    cout << soma << "\n";

}