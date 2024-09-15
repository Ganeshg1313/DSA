#include<iostream>
#include<vector>
using namespace std;

// void func(int a[], int n){
//     for(int i = 0 ; i< n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int *arr = new int[n];

//     //Inserting
//     for(int i = 0 ; i< n;i++){
//         int data;
//         cin>>data;
//         arr[i] = data;
//     }

//     //let me try to insert more items (It will not insert)
//     for(int i = 0 ; i< 10;i++){
//         arr[n + i] = 80;
//     }

//     func(arr, n);

//     return 0;
// }


void display(vector<int>v){
    int size = v.size();
    cout<<"\nPrinting the vector values: "<<endl;
    for(int  i = 0 ; i< size ; i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" "; //don't use this 
    } 
}

void display_with_foreach(vector<char>c){
    cout<<"Printing the vector values: ";
    for(auto it:c){
        cout<<it<<" ";
    }
}

int main(){

    // vector<int>v; //default with no data zero size;
    vector<int>v2(5, -1); // with n size and specific values
    // v2.push_back(50);
    // display(v2);

    // vector<int>v3 = {1,2,3,4,5};
    // v3.pop_back();
    // display(v3);

    //vector<int>v4{1,2,3,4,5}; //may not work on some compiler
    //display(v4);
    
    //vector<int>v5(v4); //copy vector
    //display(v5);

    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity : "<<v.capacity()<<" "<<"Size : "<<v.size();  
    // }

    //insert
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // v.pop_back();

    // display(v);

    // //clear the vector
    // v.clear();

    // display(v);



    vector<char>charact;
    charact.push_back('a');
    charact.push_back('b');
    charact.push_back('c');

    cout<<"Front element : "<<charact[0]<<endl;
    cout<<"Front element : "<<charact.front()<<endl;
    cout<<"End element : "<<charact[charact.size() - 1]<<endl;
    cout<<"End element : "<<charact.back()<<endl;

    display_with_foreach(charact);

    return 0;
}