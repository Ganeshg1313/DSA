//Swap the adjacent elements
//if j > j+1 for increment order
//if j < j+1 for decrement order
// requires n-1 iterations to sort
// TC : O(n^2) SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){

    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }

}

void bubbleSort(vector<int>& v){

    int n = v.size();
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(v[j] > v[j+1]){
                swap(v[j] , v[j+1]);
            }
        }
    }

}


int main()
{
    vector<int> v = {1,3,4,5,2,0};

    bubbleSort(v);
    print(v);

    return 0;
}