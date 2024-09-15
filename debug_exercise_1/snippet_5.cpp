//Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
21
321
4321
*/

//it - 1 , n = 4 , i = 1, i < 4 ,  j = 1 , j < 4 , print(p), p--, j++
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i--){
//        int p;
//         for(j=1;j<n;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
        
//     }
// }


//change : condition

#include<iostream>
using namespace std;

int main(){
  int i,j,n=4;
    for(i=1;i<=n;i++){
        int count = i;
        for(j=1;j<=i;j++){
          cout<<count;
          count--;
        }
        cout<<endl;
        
    }
}

