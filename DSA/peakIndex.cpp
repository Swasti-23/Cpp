#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/peak-index-in-a-mountain-array/
int peakIndex(int *arr, int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid]  > arr[mid + 1]){
            end = mid;
        }else{
            start = mid + 1;
        }
    }
    return start;
}

int main(){
    int array[] = {3,5,3,2,0};
    int size = sizeof(array)/sizeof(array[0]);
    int ans = peakIndex(array, size);
    cout<<ans<<endl;
}