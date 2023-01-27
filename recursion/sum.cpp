#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}

int main(){
   int n;
   cin>>n;
   cout<<Sum(n);
    return 0;
}
