#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int l = 0;
    int r = size - 1;

    while(l<=r){
        if(l==r){
            cout<<arr[l]<<" ";
        }else{
            cout<<arr[l]<<" "<<arr[r]<<" ";
        }
        l++;
        r--;
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    extremePrint(arr, size);

    return 0;
}