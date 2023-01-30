#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int recLen(char* str){
    if(*str=='\0'){
        return 0;
    }
    else{
        return 1+recLen(str+1);
    }
}
    int main(){
    char str[]="GeeksForGeeks";
    cout<<recLen(str);
    return 0;
}