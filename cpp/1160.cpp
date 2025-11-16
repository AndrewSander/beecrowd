#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i=0; i<n; i++){
        int anos=0;
        int pa,pb; cin >> pa >> pb;
        double ga,gb; cin >> ga >> gb;

        for(int j=0; j<100; j++){
            anos = j;
            pa+=(pa*ga/100);
            pb+=(pb*gb/100);
            if(pa > pb){
                break;
            }
        }

        if (anos == 99 && pb > pa){
            cout << "Mais de 1 seculo." << "\n";
        }
        else{
            cout << anos + 1 << " anos." << "\n";
        }

    }

}