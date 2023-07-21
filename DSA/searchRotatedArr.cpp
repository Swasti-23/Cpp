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

int search(int *arr, int target, int size){

    int p = pivot(arr,size);

    if(p == -1){
        return binarySearch(arr,target, 0, size - 1);
    }
    if(arr[p] == target){
        return p;
    }
    
    int first = binarySearch(arr,target, 0 ,p - 1);
    int second = binarySearch(arr, target, p + 1, size-1);

    if(first == -1){
        if(second == -1){
            return -1;
        }else{
            return second;
        }
    }else{
        return first;
    }
}

int main(){
    int array[] = {1,3};
    int target = 0;
    int size = sizeof(array)/sizeof(array[0]);
    int ans = search(array,target, size);
    cout<<ans<<endl;
}