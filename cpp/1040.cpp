#include <bits/stdc++.h>
using namespace std;

int main(){

    double n1,n2,n3,n4; cin >> n1 >> n2 >> n3 >> n4;
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10;

    cout << "Media: " << fixed << setprecision(1) << media << "\n";

    if (media >= 7){
        cout << "Aluno aprovado." << "\n";
    }
    else if (media < 5){
        cout << "Aluno reprovado." << "\n";
    }
    else{
        cout << "Aluno em exame." << "\n";
        double nota; cin >> nota;
        cout << "Nota do exame: " << fixed << setprecision(1) << nota << "\n";
        nota = (media + nota)/2;
        if (nota >= 5){
            cout << "Aluno aprovado." << "\n";
        }
        else{
            cout << "Aluno reprovado." << "\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << nota << "\n";
    }

}