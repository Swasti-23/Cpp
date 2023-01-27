#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=b%a;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
   int a,b;
   cin>>a>>b;
   cout<<gcd(a,b);
    return 0;
}