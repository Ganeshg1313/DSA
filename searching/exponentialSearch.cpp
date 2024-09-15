#include <iostream>
using namespace std;

int bs(int arr[], int s, int e, int x)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            return bs(arr, mid + 1, e, x);
        }
        else
        {
            return bs(arr, s, mid - 1, x);
        }
    }
    return -1;
}

int expSearch(int arr[], int n, int x)
{

    if (arr[0] == x) return 0;

    int i = 1;
    while (i < n && arr[i] <= x)
    {
        i = i * 2; // i*=2 // i = i << 1
    }
    return bs(arr, i / 2, min(i, n - 1), x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;

    int ans = expSearch(arr, n, x);

    if (ans == -1)
    {
        cout << "Target not found!!!" << endl;
    }
    else
    {
        cout << "The target found at index : " << ans << endl;
    }

    return 0;
}