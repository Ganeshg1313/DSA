#include<iostream>
using namespace std;

class ABC{
    public:
    static int x,y;

    void print(){
        cout<<x<<" "<<y<<endl;
    }

    static void print2(){
        cout<<x<<" "<<y<<endl;
    }
};

int ABC::x;
int ABC::y;

int main(){
    ABC obj1;
    ABC obj2;
    obj1.x = 10;
    obj1.print();
    obj2.x = 20;
    obj1.print(); //IT WILL PRITN 20 BECAUSE X IS SHARED BETWEEN ALL INSTANCES 
    return 0;
}