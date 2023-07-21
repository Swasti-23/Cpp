#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int size){
    bool swapped;
    for(int i = 0;i < size;i++){
        swapped = false;
        for(int j = 1;j < size - i;j++){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int array[] = {5, 10, 18, 8, 0, 56};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);
    for(int i = 0; i < size ; i++){
        cout<<array[i]<<" ";
    }
}