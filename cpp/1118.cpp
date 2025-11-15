#include <bits/stdc++.h>
using namespace std;

int main(){

    double n1,n2,n3,n4; cin >> n1;
    
    while(n1 < 0 || n1 > 10){
        cout << "nota invalida" << "\n";
        cin >> n1;
    }

    cin >> n2;

    while(n2 < 0 || n2 > 10){
        cout << "nota invalida" << "\n";
        cin >> n2;
    }

    double media = (n1 + n2)/2;

    cout << "media = " << fixed << setprecision(2) << media << "\n";



    while(true){
        cout << "novo calculo (1-sim 2-nao)" << "\n";
        int resp; cin >> resp;   
        while (resp != 2 && resp != 1){
            cout << "novo calculo (1-sim 2-nao)" << "\n";
            cin >> resp;
        }    
        if (resp == 2){
            break;
        }
        else if (resp == 1){
            cin >> n1;
            
            while(n1 < 0 || n1 > 10){
                cout << "nota invalida" << "\n";
                cin >> n1;
            }

            cin >> n2;

            while(n2 < 0 || n2 > 10){
                cout << "nota invalida" << "\n";
                cin >> n2;
            }

            double media = (n1 + n2)/2;

            cout << "media = " << fixed << setprecision(2) << media << "\n";            
        }
    }


    
    


}
