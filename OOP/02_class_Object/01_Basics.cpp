#include<iostream>
using namespace std;

class Student{
    private:
    string gf;

    void gfChatting(){
        cout<<"Chatting"<<endl;
    }

    public:

    int id;
    string name;
    bool isPresent;

    //Constructor is the only function in c++ which doesn't need a return type and by default it is public because if we make it private then we will not able to make any instance of the class
    Student(){
        cout<<"Default ctor called"<<endl;
    }

    Student(int _id, string _name, bool _isPresent, string _gf){
        this->id = _id;
        this->name = _name;
        this->isPresent = _isPresent;
        this->gf = _gf;
        cout<<"Parameterized ctor called"<<endl;
    }

    ~Student(){
        cout<<"Deleting object with name : "<<this->name<<endl;
    }

    void playing(){
        cout<<"Student is Playing"<<endl;
    }

    void bunking(){
        cout<<"Student it bunking"<<endl;
    }
};


int main(){

    //Student s1; //Memory allocated in stack similar to initiliazing 'int a'

    Student* s1 = new Student(); //Memory allocated in heap similar to 'int* a = new int(5)'

    Student* s2 = new Student(1, "Ronaldo", 0, "Georgina");
    //cout<<s2.name<<endl; //When we allocate on heap we can't access using . operator
    cout<<s2->name<<endl;
    cout<<(*s2).name<<endl; //If we want to access using . then we have to first dereference it
    if(s2->isPresent){
        cout<<s2->name<<" "<<"is present"<<endl;
    }
    else{
        cout<<s2->name<<" "<<"is not present!"<<endl;
    }
    // cout<<"GF"<<s2.gf; Cannot access private property

    delete s1;
    delete s2; //No Leak

    return 0;
}