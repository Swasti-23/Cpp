#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    //SwapCase without inbuilt function
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str;
    return 0;
}