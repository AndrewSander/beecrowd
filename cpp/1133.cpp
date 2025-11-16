#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2; cin >> n1 >> n2;
    
    vector<int>a={n1,n2};

    sort(a.begin(),a.end());

    for(int i=a[0]+1; i<a[1]; i++){
        if (i%5 == 2 || i%5 == 3){
            cout << i << "\n";
        }
    }

}