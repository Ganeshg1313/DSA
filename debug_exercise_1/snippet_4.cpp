//Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=1;j<n;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

//it-1 , n = 5, i = 1, i < 5 , j = 1 , j < 5 ; j++
//o/p : 1111


#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}

//after: 
//it-1 , n = 4, i = 1, i <= 4, j = 1, j <= i, j++
//o/p : 1