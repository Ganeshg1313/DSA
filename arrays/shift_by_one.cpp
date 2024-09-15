#include<iostream>
using namespace std;


void shift_by_one(int arr[], int size){

    //RIGHT SHIFT
    // int temp = arr[size-1];
    // for(int i = size; i >= 1 ; i--){
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = temp;

    //LEFT SHIFT
    // int temp = arr[0];
    // for(int i = 0 ; i < size ; i++){
    //     arr[i] = arr[i+1];
    // }
    // arr[size - 1] = temp;

    // SHIFT RIGHT BY K
    int k = 2;
    int temp[k];
    int count1 = 0;
    for(int i = 1 ; i <= k ; i++){
        temp[count1] = arr[size-i];
        count1++;
    }
    for(int i = size; i >= k ; i--){
        arr[i] = arr[i-k];
    }

    int count2 = 1;
    for(int i = 0 ; i < k ; i++){
        arr[i] = temp[k-count2];
        count2++;
    }
}

int main()
{
    int size = 6;
    int arr[size] = {10,20,30,40,50,60};

    shift_by_one(arr,size);

    for(int  i = 0 ; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}