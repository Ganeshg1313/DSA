//Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4

   *
  ***
 *****
*******

*/


//n = 4, i = 1, 1<4 , j = 1 , count = 2*4+1 = 9, gaps = 4 - 1 - 1 = 2, k = 1
//gaps-printed : 1
//m = 1, ch = 9 - 2*2 = 5
//stars-printed : 4


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 2*n+1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps - 1;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        // k = 1;
        // while(k<gaps){
        //     cout<<" ";
        //     k = k + 1;
        // }
        cout<<"\n";
        i = i + 1;
    }
}


//after : 
//n = 4, i = 1, 1<4 , j = 1 , count = 2*4+1 = 9, gaps = 4 - 1  = 3, k = 1
//gaps-printed : 3
//m = 1, ch = 9 - 2*3 - 1 = 2
//stars-printed : 1