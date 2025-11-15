#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1,m1,h2,m2; cin >> h1 >> m1 >> h2 >> m2;
    int m1t = h1 * 60 + m1;
    int m2t = h2 * 60 + m2;
    int cont = 0;

    if (m1t == m2t){
            cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)" << "\n";
    }

    else{
        while (m1t != m2t){
            m1t++;
            cont++;
            if(m1t > 1439){
                m1t=0;
            }
        }

        int horast= cont/60;
        int mint = (cont%60);
    
        cout << "O JOGO DUROU " << horast << " HORA(S) E " << mint << " MINUTO(S)" << "\n";
    }   

}