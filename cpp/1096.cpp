#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 1;
    int j = 7;
    
    while (i <= 9){
        for(int s=0; s<3; s++){
            cout << "I=" << i << " J=" << j << "\n";
            j--;
        }
        j=7;
        i+=2;
    }

}
