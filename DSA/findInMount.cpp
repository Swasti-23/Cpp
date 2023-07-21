#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/find-in-mountain-array/
int orderAgnosticBS(int *arr, int target, int start, int end){
    
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

int findInMount(int *arr, int target, int size){
    int peak = peakIndex(arr,size);

    int first_index = orderAgnosticBS(arr,target,0,peak);
    int second_index = orderAgnosticBS(arr,target,peak+1,size-1);

    if(first_index==-1){
        if(second_index==-1){
            return -1;
        }
        return second_index;
    }else{
        return first_index;
    }
    
    

}

int main(){
    int array[] = {1,2,3,4,5,3,1};
    int target = 3;
    int size = sizeof(array)/sizeof(array[0]);
    int ans = findInMount(array,target, size);
    cout<<ans<<endl;
}
