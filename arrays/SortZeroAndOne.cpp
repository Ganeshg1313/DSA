#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZero(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        // Increment left pointer if it's already pointing to a zero
        while (arr[left] == 0 && left < right) {
            left++;
        }
        // Decrement right pointer if it's already pointing to a one
        while (arr[right] == 1 && left < right) {
            right--;
        }
        // Swap elements at left and right pointers if they're out of place
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortZero(arr, n);
    print(arr, n);

    return 0;
}
