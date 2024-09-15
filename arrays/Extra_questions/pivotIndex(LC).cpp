#include<iostream>
using namespace std;

int pivotIndex(int nums[], int n){
  int start = 0;
  int end = n - 1;

  while (start <= end) {
      int lsum = 0;
      int rsum = 0;
      int mid = (start + end) / 2;
      for (int i = 0; i < mid; i++) {
          lsum += nums[i];
      }
      for (int i = n - 1; i > mid; i--) {
          rsum += nums[i];
      }
      if (lsum == rsum) {
          return mid;
          break;
      } else if (lsum < rsum) {
          start++;
      } else if (lsum > rsum) {
          end--;
      }
  }

  return -1;
    
}

int main(){
    int arr[] = {4,2,6,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = pivotIndex(arr, size);  
    cout<<res;

    return 0;
}