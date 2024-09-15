#include<iostream>
using namespace std;

int main(){
    int n = 6;
    char ch;
    for(int row = 0 ; row<n; row++){
        for(int col = 0 ; col < row+1 ; col++){
            ch = col + 1 + 'A' - 1;
            cout<<ch;
        }
        // for(int col = row ; col > 0 ; col--){
        //     char ch = col - 1 + 1 + 'A' - 1;
        //     cout<<ch;
        // }

        for(char alphabet = ch ; alphabet > 'A' ;){
            alphabet = alphabet - 1;
            cout<<alphabet;
        }

        cout<<endl;
    }
}