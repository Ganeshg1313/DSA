#include<iostream>
using namespace std;

int findMissingElement(int arr[], int n){

    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/ 2;
    int ans = -1;

    while(s<=e){

        int diff = mid[arr] -  mid;

        if(diff == 1){

            s = mid + 1;

        }
        else{
            ans = mid;
            e = mid - 1;
        }

        mid = s + (e-s) / 2;

    }

    //HW - how to change the logic to avoid writing this extra code
    if(ans + 1 == 0){
        return n + 1;
    }

    return ans + 1;
}

int main()
{
    int n = 8;
    int arr[n] = {1,2,3,4,5,6,7,8};

    cout<<findMissingElement(arr, n);

    return 0;
}