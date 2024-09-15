#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start<=end){

        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return -1;
}

int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int target = 10;

    int result = binarySearch(arr, n, target);

    if(result == -1){
        cout<<"Target not found!!!"<<endl;
    }
    else{
        cout<<"The target found at index : "<<result<<endl;
    }

    

    return 0;
}