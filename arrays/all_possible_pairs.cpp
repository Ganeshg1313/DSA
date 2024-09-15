#include<iostream>
using namespace std;

void all_pairs(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

int main()
{
    int size = 3;
    int arr[size] = {10,20,30};

    all_pairs(arr,size);

    return 0;
}