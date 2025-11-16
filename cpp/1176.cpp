#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<long long>a(61);
    
    a[1]=1;

    for(long long i=2; i<61; i++){
        a[i] = a[i-1] + a[i-2];
    }

    long long n; cin >> n;

    for(long long i=0; i<n; i++){
        long long num; cin >> num;
        cout << "Fib(" << num << ") = " << a[num] << "\n";
    }

}