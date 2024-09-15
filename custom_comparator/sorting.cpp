//Sorting using STL and using the third parameter i.e customcoparator function to specify the order in which we want to sort 
//useful in 2d vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void print(vector<int>&v){
    for(int i = 0; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}

bool mycomp(int &a , int &b){
    return a < b; //Increasing
    //return a > b; //decreasing
}

void printvv(vector<vector<int>>&v){

    for(int i = 0; i<v.size() ; i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<< " "<<b<<endl;
    }
    cout<<endl;
}

bool myComparatorFor1stIndex(vector<int>&a , vector<int>&b){
    //return a[0] < b[0]; //sort acc to 0th index
    return a[1] < b[1]; //sort acc to 1st index
}

int main()
{
    // vector<int> v = {2,3,1,4,5};

    //  sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), mycomp);

    // print(v);

    //sorting on vectors of vector

    vector<vector<int>>v;
    int n;
    cout<<"Enter the size of vector : "<<endl;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        int a,b;
        cout<<"Enter 1st and 2nd value : "<<endl;
        cin>>a>>b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    sort(v.begin() , v.end(), myComparatorFor1stIndex);

    cout<<endl<<"/n Here is the list : "<<endl;
    printvv(v);

    return 0;
}