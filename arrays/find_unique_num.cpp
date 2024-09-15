//Every element occurs multiple times except that unique element which occurs single time

#include<iostream>
using namespace std;

int getUnique(int arr[], int size){

    int ans = 0;
    for(int i = 0; i<size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}

int main() 
{
    
    int size = 10;
    int arr[size] = {1,2,3,4,5,1,2,3,4};

    int result = getUnique(arr, size);

    cout<<"The unique number is : " <<result;

    return 0;
}