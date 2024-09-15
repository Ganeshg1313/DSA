#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};
    int *p = arr; 
    int *q = arr+1;

    //WE CANT DO ARR = ARR + 1;

    //This three will give same output that is the base address
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    // cout<<arr[0]<<endl;
    // cout<<0[arr]<<endl; //THIS WILL ALSO WORK BECAUSE IN THE BTS IT WORKS AS *(arr + i) SO EITHER IT IS arr[i] or i[arr] doesn't matter
    // cout<<*arr<<endl;
    // cout<<*arr + 1<<endl;
    // cout<<(*arr) + 1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;

    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<&q<<endl;
    // cout<<*p + 1<<endl;
    // cout<<*(p) + 2<<endl;
    // cout<<*(q) + 2<<endl;
    // cout<<*(q + 4)<<endl; //GARBAGE VALUE INDEX OUT OF BOUND


    int a[] = {1,2,3,4};

    //POINTER TO AN INTEGER
    int* pt1 = a;

    //ARRAY OF POINTERS
    int (*pt2)[4] = &a;

    cout<<*pt2<<endl;
    cout<<*(pt2[0])<<endl;
    cout<<*(pt2[0] + 1)<<endl;
    cout<<*(pt2[0] + 2)<<endl;
    cout<<*(pt2[0] + 3)<<endl;

    return 0;
}