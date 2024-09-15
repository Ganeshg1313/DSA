#include<iostream>
using namespace std;

int createNumber(int numberOfDigits){
    int ans;
    while(numberOfDigits > 0){
        int number;
        cout<<"Enter the number : "<<endl;
        cin>>number;
        ans = ans * 10 + number;
    }  
    return ans;

}

int main(){
    int numberOfDigits;
    cin>>numberOfDigits;
    // int number = createNumber(numberOfDigits);

    // cout<<"Number created using digits : "<<number;
    return 0;
}