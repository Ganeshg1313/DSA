#include<iostream>
using namespace std;

void countZeroOneInArr(int arr[], int size){

    int zeroCount = 0;
    int oneCount = 0;

    for(int  i = 0 ; i < size ; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if(arr[i] ==1){
            oneCount++;
        }
    }
    
    cout<<"Count of 1s : "<<oneCount<<endl;
    cout<<"Count of 0s : "<<zeroCount<<endl;
}

int main()
{
    int size = 10;
    int arr[size] = {1,0,0,1,0,1,1,0,1,1};

    countZeroOneInArr(arr, size);

    
    return 0;
}