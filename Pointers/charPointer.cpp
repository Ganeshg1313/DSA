#include<iostream>
using namespace std;

int main()
{
    char ch[50] = "Ronaldo";

    char* cptr = ch;
    //char* cptr1 = &ch; //CANT DO THIS

    cout<<cptr<<endl; //IT WILL PRINT THE CHARACTERS STILL IT REACHES TO THE NULL CHARACTER 
    
    //ALL THREE WILL PRINT THE FIRST CHAR OF CHARARRAY
    cout<<*cptr<<endl;
    cout<<cptr[0]<<endl;
    cout<<*(cptr)<<endl;

    cout<<ch[0]<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;

    cout<<*(ch + 3)<<endl;
    cout<<*(cptr + 3)<<endl;
    cout<<cptr + 2<<endl;

    return 0;
}