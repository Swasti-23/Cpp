#include <bits/stdc++.h>
using namespace std;

int pivot(int *arr, int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(mid < end && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if(mid > start && arr[mid] < arr[mid - 1]){
            return mid - 1;
        }
        if(arr[start] >= arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}


int main(){
    int array[] = {12,14,15,1,3,4,8};
    int size = sizeof(array)/sizeof(array[0]);
    int ans = pivot(array, size);
    cout<<ans + 1<<endl;
}