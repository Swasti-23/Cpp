#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prefact=factorial(n-1);
    return n*prefact;
}
int main(){
   int n;
   cin>>n;
   cout<<factorial(n);
    return 0;
}