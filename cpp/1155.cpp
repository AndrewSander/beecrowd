#include <bits/stdc++.h>
using namespace std;

int main(){

    double s=1;
    
    for(double i=2; i<101; i++){
        s+=1.0/i;
    }

    cout << fixed << setprecision(2) << s << "\n";

}