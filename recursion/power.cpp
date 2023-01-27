#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prepow=power(n,p-1);
    return n*prepow;
}
int main(){
   int n,p;
   cin>>n>>p;
   cout<<power(n,p);
    return 0;
}