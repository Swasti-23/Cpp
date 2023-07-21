#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
int Search(int *arr, int target, int size, bool findStartIndex){
    int ans = -1;
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            ans = mid;
            if(findStartIndex){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
    }

    return ans;
}

int main(){
    int array[] = {2,2,2,2,2, 4, 5, 9, 10, 11};
    int target = 2;
    int size = sizeof(array)/sizeof(array[0]);
    int start = Search(array,target,size,true);
    int end = Search(array,target,size,false);
    cout<<start<<" "<<end<<endl;
}