#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        int soma=0;
        while(y>0){
            if(x % 2 != 0){
                y--;
                soma+=x;
            }
            x++;
        }
        cout << soma << "\n";
    }

}