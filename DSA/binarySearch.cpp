#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int target, int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            return mid;
        }
    }

    return -1;
}

int main(){
    int array[] = {2, 4, 5, 9, 10, 11};
    int target = 2;
    int size = sizeof(array)/sizeof(array[0]);
    int ans = binarySearch(array, target, size);
    cout<<ans<<endl;
}