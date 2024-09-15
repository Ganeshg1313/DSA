#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// double findMaxSubArray(int arr[], int n,int k){
//     int maxSum = INT_MIN;

//     for(int i = 0 ; i < n ; i++){
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum += arr[j];
//             if((j - i) == 3){
//                 if(sum > maxSum){
//                     maxSum = sum;
//                 }
//             }
//         }
//     }
//     double maxAvg = maxSum/(double)k;

//     return maxAvg;
// }

double findMaxSubArray(int arr[], int n,int k){
    int sum = 0;
    int i = 0;
    int j = k - 1;

    for(int y = i ; y <= j ; y++){
        sum += arr[y];
    }
    int maxSum = sum;
    j++;
    while(j < n){
        sum = sum - arr[i++];
        sum = sum + arr[j++];
        if(sum > maxSum){
            maxSum = sum;
        } 
    }

    double maxAvg = maxSum/(double)k;

    return maxAvg;
}

int main()
{
    int arr[] = {1,12,-5,-6,50,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    double ans = findMaxSubArray(arr, n, k);
    cout<<ans;

    return 0;
}