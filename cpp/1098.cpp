#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "I=0 J=1" << "\n";
    cout << "I=0 J=2" << "\n";
    cout << "I=0 J=3" << "\n";
    
    double i=0.2;
    double j= 1.2;

    while( i <= 2){
        double aux=j;
        for(int s=0; s<3; s++){
            cout << "I=" << i << " J=" << aux << "\n";
            aux++;
        }
        j+=0.2;
        i+= 0.2;
    }

}