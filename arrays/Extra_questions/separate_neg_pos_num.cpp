#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void seperator(int arr[], int size)
{
    //my-solution -- IT CHANGES THE ORDER  //TC - O(n^2) SC - O(1)
    
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i; j < size; j++)
    //         if(arr[j] < 0){
    //         swap(arr[i], arr[j]);
    //         }
    // }

    //Babbar's solution -- IT DOESNT CHANGE THE ORDER //TC - O(n) SC - O(1)

    // int j = 0 ;
    // for(int i = 0; i< size ; i++){
    //     if(arr[i] < 0 ){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }

    //dutch national flag - IT DOESNT MAINTAIN THE ORDER //TC - O(n) SC - O(1)
    int l = 0;
    int h = size-1;

    while(l<h){

        if(arr[l]<0){
            l++;
        }
        else if(arr[h] > 0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }

    }


}



int main()
{
    int size = 6;
    int arr[size] = {23, -7, -10, -11, 40, 60};

    seperator(arr, size);

    printArray(arr, size);

    return 0;
}