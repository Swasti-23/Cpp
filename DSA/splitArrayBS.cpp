#include <bits/stdc++.h>
using namespace std;

int spiltArray(int *nums, int m, int size){
    int start = 0;
    int end = 0;

    for(int i = 0;i < size; i++){
        start = max(start, nums[i]);
        end += nums[i];
    }

    while(start < end){
        int mid = start + (end - start)/2;
        int sum = 0;
        int pieces  = 1;
        for(int i = 0; i< size; i++){
            if(sum + nums[i] > mid){
                sum = nums[i];
                pieces++;
            }else{
                sum += nums[i];
            }
        }

        if(pieces >  m){
            start = mid + 1;
        }else{
            end= mid;
        }
    }
    return end;
}