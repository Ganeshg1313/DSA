//In case of the nearly sorted array the possible answer can be mid or mid + 1 or mid - 1 ans we need to return different asnwer for each contition as the index are different 
//Sorted arr -    10 20 30 40 50 60 70 80
//Nearly Sorted - 10 30 20 50 40 70 60 80

//While comparing the target with the mid we also need to check for the mid + 1 and mid - 1
//To save the iterations we will shift by 2 (s = mid + 2 or e = mid -2) as we are checking the adj elements already 

#include<iostream>
using namespace std;

int SearchInNearlySorted(int arr[], int n, int target){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while(s<=e){

        if(arr[mid] == target){
            return mid;
        }
        else if(mid+1 < n && arr[mid + 1] == target){
            return mid+1;
        }
        else if(mid-1 >= 0 && arr[mid - 1] == target){
            return mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
         mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 50;

    int index  = SearchInNearlySorted(arr, n, target);

    if(index >= 0){
        cout<<"Target found at index  : " <<index;
    }
    else{
        cout<<"Target not found!!!";
    }

    return 0;
}