#include <bits/stdc++.h>
using namespace std;

int orderAgnosticBS(int *arr, int target, int size){
    int start = 0;
    int end = size - 1;

    bool isAsc = arr[start] < arr[end];
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(isAsc){
            if(target < arr[mid]){
            end = mid - 1;
            }else{
            start = mid + 1;
            }
        }else{
            if(target > arr[mid]){
            end = mid - 1;
            }else{
            start = mid + 1;
            }
        }
    }

    return -1;
}

int main(){
    int array[] = {12, 11, 6, 7, -1};
    int target = 6;
    int size = sizeof(array)/sizeof(array[0]);
    int ans = orderAgnosticBS(array, target, size);
    cout<<ans<<endl;
}
