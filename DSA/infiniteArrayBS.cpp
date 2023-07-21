#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int target, int start, int end){
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

int InfiniteArray(int *arr,int target){
    int start = 0;
    int end = 1;
    
    while(target > arr[end]){
        int newStart = end + 1;
        end = end + (end - start + 1) * 2;
        start = newStart;
    }

    return binarySearch(arr, target, start, end);
}

int main(){
    int array[] = {2, 4, 5, 9, 10, 11, 12, 16, 17, 21, 25, 38, 90, 100, 102, 108, 115, 200, 201};
    int target = 108;
    int ans = InfiniteArray(array,target);
    cout<<ans<<endl;
}