#include <iostream>
using namespace std;

void all_pairs(int arr[], int size)
{
    // int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] <<")" << endl;
                // count++;
            }
        }
    }
    // cout<<count; //27
}

int main()
{
    int size = 3;
    int arr[size] = {10, 20, 30};

    all_pairs(arr, size);

    return 0;
}