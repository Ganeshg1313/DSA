/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/

//it - 1 ;  n = 5 ; i = 1 ; 1 <= 5 ; p = 'B', j = 1 , j<=i ; print(p), p++

// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='A'-i;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 5;
    for (i = 0; i < n; i++) // changed
    {
        char p = 'E' - i; // changed
        for (j = 0; j <= i; j++) //changed
        {
            cout << p;
            p++;
        }
        cout << endl;
    }
}

