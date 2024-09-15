//Approach => Negative Marking method
//1 => We can can only consider the elements from 1 to N
//2 => We will iterate through the array and as per the value of the element we will jump to that index and mark that indexed number as visited(-ve)
//3 => Now all the indices where their elements are positive are the answer means we have to return the index becuase the index is the answer itself

#include <iostream>
using namespace std;

void negativeIndexingMethod(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    int index = abs(arr[i]);
    if (arr[index - 1] > 0) {
      arr[index - 1] *= -1;
    }
  }

  cout << "Using negativeIndexing Method : " << endl;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      cout << i + 1 << " ";
    }
  }
}

void sortingSwappingMethod(int arr[], int n) {
  int i = 0;
  while (i < n) {
    int index = arr[i] - 1;
    if (arr[index] != arr[i]) {
      swap(arr[i], arr[index]);
    } else {
      i++;
    }
  }
  cout << "Using sortingSwapping Method :" << endl;
  for (int i = 0; i < n; i++) {
    if (arr[i] != i + 1) {
      cout << i + 1 << " ";
    }
  }
}

int main() {
  int arr[] = {0, 1, 2, 3, 10, 4, 5, 6, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  negativeIndexingMethod(arr, n);
  //sortingSwappingMethod(arr, n);

  return 0;
}