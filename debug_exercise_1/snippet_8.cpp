/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/

// #include<iostream>
// using namespace std;

// void printPatt(int n){
//     int i=1;
//     while(i<(n)){
//         int gaps = n-2*i,k=1;
//         if(i>(n)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - 1 - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// int main(){

//     printPatt(5);

//     return 0;
// }


#include<iostream>
using namespace std;

void printPatt(int n){
    int i=1;
    while(i<=(n)){
        int gaps = n-2*i+1,k=1;
        if(i>(n+1)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps;
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}


int main()
{
    printPatt(5);
    return 0;
}

/* 

n = 5, i=1, 1<5 , gaps =  n-2*i = 3, k=1
if (i>2) , no = (n+1)/2 : 3, gaps = 2*(i%no) : 6


*/