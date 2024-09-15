#include<iostream>
using namespace std;

void display_arr(int arr[] , int size){

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int create_arr(int arr[] , int size){
    
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter the index : ";
        cin>>i;
        cout<<"Enter the number : ";
        cin>>arr[i];
    }
}

void double_arr_values(int arr[], int size){

    for(int i = 0 ; i < size ; i++){
        arr[i] = 2*arr[i];
    }
}

void sum(int arr[], int size){

    int sum = 0;
    for(int  i = 0 ; i < size ; i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of values of array : "<<sum; 
}

int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};

    // int arr2[2] = {1,2,3,4}; //error

    // cout<<"Base address of arr : "<<&arr<<endl;
    // cout<<"Size of arr : "<<sizeof(arr)<<endl;

    // display_arr(arr , size);

    int size2 = 10;
    int arr2 [size2];

    // create_arr(arr2 , size2);
    // display_arr(arr2 , size2);

    int size3 = 5;
    int arr3[size3] = {1,2,3,4,5};

    // double_arr_values(arr3 ,size3);
    // display_arr(arr3, size3);


    sum(arr, size);

    return 0;
}