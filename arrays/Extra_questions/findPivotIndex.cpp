#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + ( e - s) / 2;

        while(s<=e){

            if(s==e){ return s; }

            if( n == 2){
                return mid+1;
            }

            if(nums[mid] < nums[mid - 1]){ return mid - 1;}

            if(nums[mid] > nums[mid + 1]){ return mid;}

            if(nums[s] > nums[mid]) { e = mid - 1; }

            if(nums[s] < nums[mid]) { s = mid + 1;}

            mid = s + (e - s) / 2;

        }
        return -1;

    }

int main()
{
    vector<int> nums;

    nums.push_back(12);
    nums.push_back(14);
    nums.push_back(16);
    nums.push_back(2);
    nums.push_back(4);
    // nums.push_back(1);
    // nums.push_back(3);

    int pivotIndex = findPivot(nums);

    cout<<"The pivot index is : "<<pivotIndex;

    return 0;
}