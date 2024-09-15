#include<iostream>
using namespace std;

//When we define the variable/func/Obj using const the compiler can optimize the execution of code as it divides
// the variables into two categories constant and vairable so it will store all the constant variables in the 
// constant part(a readonly memory space) and it doesn't need to bother about dynamicaly changing its value

//In c++ there are two kinds of concepts 
//1. lvalue : Variables having memory location
//EX : int x , char ch
//2. rvalue : Variables does not having memory location
//EX : 5; int &a = b;

int main(){

    //1. With variables
    const int x = 10;
    //x = 20; //Cannot reinitialize the constant variable as it is immutable
    // cout<<x<<endl;

    //2. Const with pointers
    const int *a = new int(5); //Const data , non-constant pointer
    //int const* a = new int(5); //same as above
    // *a = 5; // We cannot reassign the data(content) at the pointing location 
    cout<<*a<<endl;
    // //delete a; // There will be not memeory leak as we are deleting the a value from the heap
    int b = 10;
    a = &b; // But we can reassign the pointer to another location
    cout<<*a<<endl;

    //3. Const pointer , but Non-constant data
    int *const c = new int(6);  // using * before const keyword
    *c = 15; // We can reassign the data(content) at the pointing location 
    cout<<*c<<endl;
    int e = 100;
    //c = &e; // we cannot reassign the pointer to another location

    //4. Const pointer, const data
    const int *const f = new int(10);
    // *f = 90; //Will not work
    cout<<*f<<endl;
    int z = 4;
    // f = &z; //Will not work

    return 0;
}