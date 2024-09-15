//This will be done in O(logn) time complexity

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



int LastOccurance(int arr[], int n, int target){

    int start = 0;
    int end = n - 1;
    //int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    int result = -1;

    while(start<=end){

        if(target == arr[mid]){
            result = mid;
            start = mid + 1;
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
    int arr[n] = {2,2,2,2,3,4,4,6,7,7};
    int target = 2;

    int result_1 = FirstOccurance(arr, n, target);
    int result_2 = LastOccurance(arr, n, target);

    int no_of_occur = (result_2 - result_1) + 1;

    cout<<"The number of occurance is : "<<no_of_occur;
    

    return 0;
}