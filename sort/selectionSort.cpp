//Find the minimum element and swap with the ith element
//requires n - 1 iteration
//TC : O(n^2) SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){

    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }

}

void selectionSort(vector<int>& v){
    int n = v.size();

    for(int i=0 ; i<n-1 ; i++){
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
}

int main()
{
    vector<int> v = {2,-1,1,4,5,0};

    selectionSort(v);

    print(v);

    return 0;
}