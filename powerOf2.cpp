#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
bool ispower2(int n){
    return n && !(n & n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<ispower2(n)<<endl;
    return 0;
}