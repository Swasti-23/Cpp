#include <bits/stdc++.h>
using namespace std;

void swapFunc(int *arr, int first, int second){
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void insertionSort(int * arr, int size){
    for(int i = 0; i < size - 1;i++){
        for(int j = i+1;j > 0;j--){
                if(arr[j] < arr[j-1]){
                    swapFunc(arr, j ,j-1);
                }else{
                    break;
                }
        }
    }
}

int main(){
    int array[] = {5, 3, 4, 1, 2};
    int size = sizeof(array)/sizeof(array[0]);
    insertionSort(array, size);
    for(int i = 0; i < size ; i++){
        cout<<array[i]<<" ";
    }
}