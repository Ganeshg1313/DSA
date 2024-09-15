#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myComp(int &a, int &b){
    return a>b;
}

bool myCompForIndex1(vector<int>&a, vector<int>&b){
    return a[1]<b[1];
}

int main() { 
  // int arr[] = {4, 3, 2, 1, 5};
  // int n = sizeof(arr) / sizeof(arr[0]);

  // sort(arr, arr + n, myComp);
  
  // for(int i = 0 ; i < n ; i++){
  //   cout<<arr[i]<<" ";
  // }

  vector<vector<int>>v = {
  {1,3},
  {5,40},
  {0,44},
  {3,90}
  };
  // int size = 0;
  // cout<<"Enter the vector size : "<<endl;
  // cin>>size;

  // for(int i = 0 ; i < size ; i++){
  //   int a;
  //   int b;
  //   cin>>a>>b;
  //   v.push_back({a,b});
  // }

  //Sorting as per col 0
  // sort(v.begin(), v.end());
  //Sorting as per col 1
  sort(v.begin(), v.end(), myCompForIndex1);

  cout<<"Printing the vector : "<<endl;
  for(int i = 0 ; i < v.size() ; i++){
    for(int j = 0 ; j < v[i].size() ; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}