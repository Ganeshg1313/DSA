#include<iostream>
using namespace std;

class abc{
    //mutable int x; // Now we can now change the value of x in the const method (WE ONLY DO THIS WHILE DEBUGGING)
    int x;
    int *y;
    int z;

    public:

    abc(){
        x = 0;
        y = new int(10);
        z = 0;
    }

    abc(int x, int _y, int z = 0){
        this->x = x;
        y = new int(_y);
        this->z = z;
    }

    //WE CANNOT ASSIGN THIS METHODS AS CONSTANT AS THESE ARE MANIPULATING DATA
    int setX(int val){
        this->x = val;
    }
    int setY(int val){
        y = new int(val);
    }
    int setZ(int val){
        this->z = val;
    }

    //WE CAN ASSIGN THEM CONST AS WE ARE NOT MODIFINING ANY DATA 
    int getX() const{
        //x = 10; //NOT ALLOWED
        return x;
    }
    int getY() const{
        return *y;
    }

    int getZ() const{
        return z;
    }

};

void printABC(const abc &a){
    
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl; //In the method parameters we have decalared the obj as const so we 
    // can only call the const methods so we need to make the getZ() method const
}

int main(){

    abc a(1,2);
    printABC(a);
    return 0;
}