#include<iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int target){

    int start = 0;
    int end = n - 1;
    //int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    int result = -1;

    while(start<=end){

        if(target == arr[mid]){
            result = mid;
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return result;
}

int main()
{
    int n = 10;
    int arr[n] = {2,2,2,2,3,4,4,6,7,8};
    int target = 2;

    int result = FirstOccurance(arr, n, target);

    if(result == -1){
        cout<<"Target not found!!!"<<endl;
    }
    else{
        cout<<"The target found at index : "<<result<<endl;
    }

    

    return 0;
}