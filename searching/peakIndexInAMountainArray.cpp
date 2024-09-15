#include <iostream>
using namespace std;

int peakIndexMountainArray(int arr[], int size){
  int start = 0;
  int end = size - 1;

  while(start<end){
    int mid = start + (end - start)/2;
    if(arr[mid] < arr[mid + 1]){
      //I am on line A need to goto right
      start = mid + 1;
    }
    else{
      //I am either on line B or peak
      end = mid;
    }
  }
  
  return start;
}

int main(){
  int arr[] = {12};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << peakIndexMountainArray(arr, n) << endl;
  return 0;
}