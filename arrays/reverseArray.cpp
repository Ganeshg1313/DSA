#include<iostream>
#include<limits.h>
using namespace std;

void reverseArr(int arr[], int size){

    int left = 0;
    int right = size-1;

    while( left <= right){
        swap(arr[left],arr[right]);
        left++;
        right--;

    }

}

void display_arr(int arr[] , int size){

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size=5;
    int arr[size] = {1,2,3,-3,-2};

    reverseArr(arr, size);
    display_arr(arr, size);

    return 0;
}