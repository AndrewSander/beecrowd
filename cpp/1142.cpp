#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int n1=1,n2=2,n3=3;
    
    for(int i=0; i<n; i++){
        cout << n1 << " " << n2 << " " << n3 << " PUM\n";
        n1+=4;
        n2+=4;
        n3+=4;
    }

}