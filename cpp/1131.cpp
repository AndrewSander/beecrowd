#include <bits/stdc++.h>
using namespace std;

int main(){

    int vinter=0,vgremio=0,empate=0,grenais=1;
    int inter,gremio; cin >> inter >> gremio;

    if (inter > gremio){
        vinter++;
    }
    else if (gremio > inter){
        vgremio++;
    }
    else{
        empate++;
    }

    cout << "Novo grenal (1-sim 2-nao)" << "\n";
    int resp; cin >> resp;

    while (resp == 1){
        grenais++;
        cin >> inter >> gremio;

        if (inter > gremio){
            vinter++;
        }
        else if (gremio > inter){
            vgremio++;
        }
        else{
            empate++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << "\n";
        cin >> resp;
    }

    cout << grenais << " grenais" << "\n";
    cout << "Inter:" << vinter << "\n";
    cout << "Gremio:" << vgremio << "\n";
    cout << "Empates:" << empate << "\n";

    if (vgremio > vinter){
        cout << "Gremio venceu mais" << "\n";
    }
    else if (vinter > vgremio){
        cout << "Inter venceu mais" << "\n";
    }
    else{
        cout << "Nao houve vencedor" << "\n";
    }

}