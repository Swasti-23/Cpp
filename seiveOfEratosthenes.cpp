#include <bits/stdc++.h>
using namespace std;

void seive(int n, vector <bool>& primes){
    /*false in array means number is prime*/
    for(int i=2;i*i<=n;i++){
        if(!primes[i]){
            for(int j = i*2; j<=n;j+=i){
                primes[j] = true;
            }
        }
    }

    for(int i = 2;i <= n;i++){
        if(!primes[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 40;
    vector <bool> primes(n+1, false);
    seive(n, primes);
    return 0;
}