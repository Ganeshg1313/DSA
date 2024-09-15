#include<iostream>
using namespace std;

#define PI 3.14 //MACRO
#define maxx(x,y) (x > y ? x : y)

int circleArea(int d){
    return PI*d*d;
}

int func(int n1, int n2){
    return maxx(n1,n2);
}

int main(){ 

    // cout<<circleArea(3);
    cout<<func(1,2);

    return 0;
}