#include <iostream>
using namespace std;

void sort_ip(int arr[], int size)
{

    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_zero++;
        }
        else if (arr[i] == 1)
        {
            count_one++;
        }
        else if(arr[i] == 2)
        {
            count_two++;
        }
    }

    int i=0;
    int j=0;
    int s=0;
    for(i = 0 ; i < count_zero ; i++){
        arr[i] = 0;
    }
    for(j = i+1; j < count_one + i ; j++){
        arr[j] = 1;
    }
    for(s = j ; s <= size ; s++){
        arr[s] = 2;
    }

    //EASY WAY

    // int index = 0;
    // while(count_zero--){
    //     arr[index] = 0;
    //     index++;
    // }
    // while(count_one--){
    //     arr[index] = 1;
    //     index++;
    // }

}

int main()
{
    int size = 10;
    int arr[size] = {1, 1, 2, 0, 1, 0, 1, 0, 0, 1};

    sort_ip(arr, size);

    for(int  i = 0 ; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}