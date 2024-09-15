#include <iostream>
#include<vector>
using namespace std;

void printV(vector<int> v){
  cout<<"\nPrinting Vector : "<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}

void sortColors(vector<int>& nums){
  int index = 0;
  int left = 0;
  int right = nums.size() -  1;
  while(index<=right){
    if(nums[index] == 0){
      swap(nums[index],nums[left]);
      left++;
      index++;
    }
    else if(nums[index] == 2){
      swap(nums[index],nums[right]);
      right--;
      //index++;
      //Catch : because we dont know from the right which element is coming
    }
    else{
      index++;
    }
  }
  printV(nums);
}

int main() {

  vector<int> v = {1,0,2,1,1,0};
  sortColors(v);
  
}