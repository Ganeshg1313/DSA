#include<iostream>
using namespace std;

int main(){

    int n = 5;

    for(int row=0 ; row<n ; row++){

        //space
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }

        //number
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1;
        }

        for (int col = row; col > 0; col--)
        {
            cout<<col;
        }
        
        cout<<endl;
    }
}