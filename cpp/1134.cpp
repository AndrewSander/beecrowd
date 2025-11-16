#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string>a= {"Alcool: ", "Gasolina: ", "Diesel: "};
    vector<int>b(3);

    int num; cin >> num;

    while(num != 4){
        while (num > 4){
            cin >> num;
        }
        b[num-1]++;
        cin >> num;
    }

    cout << "MUITO OBRIGADO" << "\n";
    for (int i=0; i<3; i++){
        cout << a[i] << b[i] << "\n";
    }

}