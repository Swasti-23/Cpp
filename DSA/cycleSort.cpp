#include <bits/stdc++.h>
using namespace std;


void swap(int *arr,int first, int second){
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}
void cycleSort(int *arr, int size){
    int i = 0;
    while(i < size){
        int correct = arr[i] - 1;
        if(arr[i] != arr[correct]){
            swap(arr,i,correct);
        }else{
            i++;
        }
    }
}

int main(){
    int array[] = {3,5,2,1,4};
    int size = sizeof(array)/sizeof(array[0]);
    cycleSort(array, size);
    for(int i = 0; i < size ; i++){
        cout<<array[i]<<" ";
    }
}