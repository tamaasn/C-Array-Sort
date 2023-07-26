#include <stdio.h>



void sort_array(int arr[] , int size){
    int output[size];
    int count=0;
    int x;
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i] > arr[j]){
                x = arr[j];
                arr[j] = arr[i];
                arr[i]=x;
            }
        }
    }

    for (int i=0;i<size;i++){
        printf("%d" , arr[i]);
    }
}


int main(){

    int arr[8] = {3,6,5,7,1,2,8,10};
    sort_array(arr , 8);
}
