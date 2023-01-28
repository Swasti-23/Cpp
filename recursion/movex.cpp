#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
string movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=movex(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<movex("axxxbfthxxja");
    return 0;
}