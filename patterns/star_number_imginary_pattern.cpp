#include<iostream>
using namespace std;

int main(){

    int ROWS = 5;
    int COLS = 8;

    for(int row = 0 ; row < ROWS ;row++){

        //part - 1
        for(int col = 0 ; col < COLS-row ; col++ ){
            cout<<"* ";
        }

        //part - 2
        for(int col = 0 ; col < 2*row+2 ; col++){
            if(col%2 == 1){
                cout<<row+1;
            }
            else{
                if(col != 0){
                cout<<" * ";
                }
            }
        }

        //part - 3
         for(int col = 0 ; col < COLS-row ; col++ ){
            cout<<" *";
        }

        cout<<endl;

    }

}