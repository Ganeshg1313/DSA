#include<iostream>
using namespace std;

int x = 10;

void func(){
    int x = 100;
    cout<<x<<endl;
    ::x = 40; //changing global var value
    cout<<::x<<endl;
}

int main(){

    func();

    // x = 4;
    int x = 20;
    cout<<x<<endl;
    cout<<::x<<endl; //:: to access global variable

    {
        int x  = 50;
        cout<<50<<endl;
        cout<<::x<<endl;
    }

    return 0;
}