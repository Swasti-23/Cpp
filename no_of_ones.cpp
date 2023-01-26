#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int numberOfOnes(int n){
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    cout<<numberOfOnes(n)<<endl;
    return 0;
}