#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int> a;

    for(int i=1; i<=100; i++){
        int num; cin >> num;
        if (num > a.first){
            a.first = num;
            a.second = i;
        }
    }

    cout << a.first << "\n";
    cout << a.second << "\n";


}