//Debug the code. It is trying to print the given pattern.

/*
Pattern
1
23
345
4567
*/


// #include<iostream>
// using namespace std;


// int main(){
//     int n = 6;
//     int i=1;
//     while(i<n){
//         int j = i,count = 1;
//         while(count<i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// working of the question code : 

//i=1, j = 1, count = 1, 1 < 1, print 1, j++, count++ , i++

//i=2, j = 2, count = 1, 1 < 2, print 2, j++, count++ , i++

//i=3, j = 3, count = 1, 1 < 3, print 3, j++, count++ 
//i=3, j = 3, count = 2, 2 < 3, print 4, j++, count++ , i++

//i=4, j = 4, count = 1, 1 < 4, print 4, j++, count++ 
//i=4, j = 5, count = 2, 2 < 4, print 5, j++, count++ 
//i=4, j = 6, count = 3, 3 < 4, print 6, j++, count++ , i++

//i=5, j = 5, count = 1, 1 < 5, print 5, j++, count++ 
//i=5, j = 6, count = 2, 2 < 5, print 6, j++, count++ 
//i=5, j = 7, count = 3, 3 < 5, print 7, j++, count++ 
//i=5, j = 8, count = 4, 4 < 5, print 8, j++, count++ , i++


//change : count<=i

#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}