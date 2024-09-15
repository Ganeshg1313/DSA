#include <iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

// void rotate(int arr[], int n, int k){
//   int temp[1];
//   for(int i=0; i<=k; i++){
//     temp[0] = arr[n-1];
//     for(int j=n-1; j>0; j--){
//       swap(arr[j], arr[j-1]);
//     }
//     arr[0] = temp[0];
//   }
//   print(arr, n);
// }

void rotate(int arr[], int n, int k){
  int temp[n];
  for(int i=0; i<n; i++){
    temp[(i+k)%n] = arr[i]; //problem in op
  }
  print(temp, n);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7};
  int size = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  rotate(arr,size,k);
}