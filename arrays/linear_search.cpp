#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){

    for(int  i = 0 ; i < size ; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;

}

int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    int target = 5;

    bool found = linearSearch(arr, size, target);

    if(found == 1){
        cout<<"Target found";
    }
    else{
        cout<<"Target not found";
    }

    return 0;
}