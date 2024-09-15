#include<iostream>
using namespace std;

int main(){

    int n = 5;

    for(int row = 0 ; row < n ; row++){
        for(int col = 0; col < 5 - row ; col++)
        {
            if(row == 0){
                cout<<col+row+1;
            }
            else{
                if(col==0 || col == 5- row -1)
                {
                    cout<<col+row+1;
                }
                else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }
}