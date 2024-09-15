#include <iostream>
using namespace std;

void missingNumber1(int arr[], int n){
  int sum = ((n) * (n+1)) / 2;
  int arrSum = 0;
  for(int i=0; i<n; i++){
    arrSum = arrSum + arr[i];
  }
  int missing = sum - arrSum;
  cout<<missing<<endl;
}

void missingNumber2(int arr[], int n){
  int sum = ((n) * (n+1)) / 2;
  int arrSum = 0;
  for(int i=0; i<n; i++){
    arrSum = arrSum + arr[i];
  }
  int missing = sum^arrSum;
  cout<<missing<<endl;
}

int main() {
  int arr[] = {0,1,2,3,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  missingNumber1(arr,size);
  missingNumber2(arr,size);
}