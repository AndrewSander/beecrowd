#include <bits/stdc++.h>
using namespace std;

int main(){

    string palavra1; cin >> palavra1;
    if (palavra1 == "vertebrado"){
        string palavra2; cin >> palavra2;
        if (palavra2 == "mamifero"){
            string palavra3; cin >> palavra3;
            if (palavra3 == "onivoro"){
                cout << "homem" << "\n";
            }
            else{
                cout << "vaca" << "\n";
            }
        }
        if (palavra2 == "ave"){
            string palavra3; cin >> palavra3;
            if (palavra3 == "carnivoro"){
                cout << "aguia" << "\n";
            }
            else{
                cout << "pomba" << "\n";
            }
        }
    }
    else if (palavra1 == "invertebrado"){
        string palavra2; cin >> palavra2;
        if (palavra2 == "inseto"){
            string palavra3; cin >> palavra3;
            if (palavra3 == "hematofago"){
                cout << "pulga" << "\n";
            }
            else{
                cout << "lagarta" << "\n";
            }
        }
        else{
            string palavra3; cin >> palavra3;
            if (palavra3 == "onivoro"){
                cout << "minhoca" << "\n";
            }
            else{
                cout << "sanguessuga" << "\n";
            }
        }
    }

}