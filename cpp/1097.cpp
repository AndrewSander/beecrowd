#include <bits/stdc++.h>
using namespace std;

int main(){

    int i=1;
    int j= 7;
    
    while (i <= 9){
        int aux = j;
        for(int s=0; s<3; s++){
            cout << "I=" << i << " J=" << aux << "\n";
            aux--;
        }
        i+=2;
        j+=2;
    }

}