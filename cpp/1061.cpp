#include <bits/stdc++.h>
using namespace std;

int main(){

    string a; cin >> a;
    int d1; cin >> d1;
    
    int hora1; cin >> hora1;
    cin >> a;
    int minuto1; cin >> minuto1;
    cin >> a;
    int segundo1; cin >> segundo1;

    cin >> a;
    int d2; cin >> d2;

    int hora2; cin >> hora2;
    cin >> a;
    int minuto2; cin >> minuto2;
    cin >> a;
    int segundo2; cin >> segundo2;

    int st1= (hora1 * 60 * 60) + (minuto1 * 60) + segundo1;
    int st2= (hora2 * 60 * 60) + (minuto2 * 60) + segundo2;
    int aux=0;
    

    while (d1 != d2 || st1 != st2){
        aux++;
        st1++;
        if (st1 >= 86400){
            st1 = 0;
            d1++;
        }
    }

    int dias = aux/86400;
    int horas = (aux%86400)/3600;
    int minutos = ((aux%86400)%3600)/60;
    int segundos = ((aux%86400)%3600)%60;
    
    cout << dias << " dia(s)" << "\n";
    cout << horas << " hora(s)" << "\n";
    cout << minutos << " minuto(s)" << "\n";
    cout << segundos << " segundo(s)" << "\n";







}