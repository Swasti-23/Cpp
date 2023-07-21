#include <bits/stdc++.h>
using namespace std;

void swapFunc(int *arr, int first, int second){
    int temp = arr[first];
    arr[first] = second;
    arr[second] = temp;
}

int getMaxIndex(int *arr, int start, int last){
    int max = start;
    for(int i = start; i <= last; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}

void selectionSort(int *arr, int size){
    for(int  i = 0; i< size ; i++){
        int last = size - 1 - i;
        int maxIndex = getMaxIndex(arr, 0, last);
        swapFunc(arr, maxIndex, last);
    }
}

int main(){
    int array[] = {5, 10, 18, 8, 0, 56};
    int size = sizeof(array)/sizeof(array[0]);
    selectionSort(array, size);
    for(int i = 0; i < size ; i++){
        cout<<array[i]<<" ";
    }
}