#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printV(vector<int> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findPivot(int arr[], int n){
    
   int s = 0;
   int e = n - 1;

   while(s <= e){
    int mid = s + (e-s) / 2;

    if(arr[mid] > a)
   }
  
}

int main(){


    int arr[] = {12,14,16,1,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int pivotIndex = findPivot(arr, size);

    cout<<"The pivot index is : "<<pivotIndex;

  return 0;
}