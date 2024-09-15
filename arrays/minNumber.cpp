#include<iostream>
#include<limits.h>
using namespace std;

void getMinNumber(int arr[], int size){

    int minNum  = INT_MAX;

    for(int  i = 0 ; i < size ;i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }

    cout<<"Minimum Number is : "<<minNum;

}

int main()
{
    int size=5;
    int arr[size] = {26,73,27,1,-100};

    getMinNumber(arr, size);

    return 0;
}