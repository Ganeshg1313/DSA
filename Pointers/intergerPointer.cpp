#include<iostream>
using namespace std;

int main()
{
    int a = 100;
    int *ptr = &a;

    //WE CAN DO  PTR = PTR + 1 but we can't do it with array

    // int ptr = ptr + 1; //ON ONLINE COMPILER WE CAN DO IT
    // cout<<*ptr;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    //  cout<<*a<<endl; //ERROR
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<(*ptr)++<<endl;
    // cout<<++(*ptr)<<endl;
    // cout<<(*ptr/2)<<endl;
    // cout<<((*ptr)-2)<<endl;

    // int a = 50;
    // int *p = &a;
    // int *q = p;
    // int *r = q;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // //cout<<*a<<endl; //ERROR
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<r<<endl;
    // cout<<&r<<endl;
    // cout<<*r<<endl;

    return 0;
}