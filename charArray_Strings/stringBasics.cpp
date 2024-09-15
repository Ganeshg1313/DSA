#include<iostream>
#include<string.h>
using namespace std;

string  e(string s){
    return s.erase(4,4);
}

int main()
{
    // string s;

    // cout<<"Enter the string : ";

    // getline(cin, s);

    // cout<<"The string you entered : "<<s<<endl;;
    
    // cout<<"The length of the string : "<<s.length()<<endl;;
    // cout<<"Is string empty : "<<(s.empty()?"Yes":"No")<<endl;
    // cout<<"Character at index 0 : "<<s.at(0)<<endl;
    // cout<<"Character at Front : "<<s.front()<<endl;
    // cout<<"Character at End : "<<s.back()<<endl;

    // string s2 = " String 2 ";

    // cout<<"Appending the S2 and S3 : "<<s.append(s2);

    // string desc = "This is a CAR";

    // desc.erase(4,3);

    // cout<<desc;

    // string name = "Ganesh Ghodke";
    // string mid_name = "Vaman ";

    // name.insert(7,mid_name);

    // cout<<name;

    // string temp = "Ganesh";

    // cout<<temp<<endl;
    // temp.push_back('G');
    // cout<<temp<<endl;
    // temp.pop_back();
    // cout<<temp<<endl;

    string str1 = "Ganesh";
    string str2 = "Ghodke";

    // if(str1.find(str2) == string::npos){
    //     cout<<"Not Found!!!"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }

    // if(str1.compare(str2) == 0){
    //     cout<<"Matching"<<endl;
    // }
    // else{
    //     cout<<"Not Matching!!!"<<endl;
    // }


    // string d = "My Name is Ganesh";

    // cout<<d.substr(11,6);

    string s = "eedede";
    cout<<e(s)<<endl;
    cout<<s;

    return 0;
}