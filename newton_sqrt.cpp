#include <bits/stdc++.h>
using namespace std;

double sqrt(double n){
    double x = n;
    double root;
    while(true){
        root = 0.5 * (x + (n/x));
        if(abs(root - x) < 1){
            break;
        }

        x = root;
    }
    return root;
}

int main(){
    double n = 40;
    cout<<sqrt(n);
}