/*
Pattern
N = 4
   1
  232
 34543
4567654
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = 2*no;
//     while(i<=(no)){
//         int gaps = n-2*i+1,k=1;
//         int j = i;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps + 1, z = (ch+1)/2;
//         while(z>1){
//             cout<<j;
//             j = j - 1;
//             z = z + 1;
//         }
//         j = j - 1;
//         z = (ch-1)/2;
//         while(z>=1){
//             j = j - 1;
//             cout<<j;
//             z = z - 1;
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

/*no = 4, i = 1, n = 2*4 = 8, i <= 4,
  gaps = 8-2*1+1 = 7, k = 1
  j = 1; 
  k <= gaps / 2 = 7/2 = 3 , print(" "), k++
  op : gap gap gap

  ch = 8 - 7 + 1 = 2 , z = 3/2 = 1
  while z > 1 , print(j), j-- , z++
  op : nothing

  j-- = 0 , z = ch-1/2 = 0, z>=1 , j-- , print(j), z--
  op : -1

   k = 1 ; k <= gaps / 2 : 1 <= 3, k++
   op : gap gap gap

   i++
*/

#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no-1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
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


/*no = 4, i = 1, n = 2*4 = 8, i <= 4,
  gaps = 8-2*1+1 = 7, k = 1
  j = 1; 
  k <= gaps / 2 = 7/2 = 3 , print(" "), k++
  op : gap gap gap

  ch = 8 - 7 = 1 , z = 2/2 = 1
  while z >= 1 , print(j), j++ , z--
  op : 1

  j-- = 0 , z = ch-1/2 = 0, z>=1 , j-- , print(j), z--
  op : nothing

   k = 1 ; k <= gaps / 2 : 1 <= 3, k++
   op : gap gap gap

   i++
*/


/*no = 4, i = 2, n = 2*4 = 8, i <= 4,
  gaps = 8-2*2+1 = 5, k = 1
  j = 2; 
  k <= gaps / 2 = 5/2 = 2 , print(" "), k++
  op : gap gap 

  ch = 8 - 5 = 3 , z = 4/2 = 2
  while z >= 1 , print(j), j++ , z--
  op : 2 3 

  j-- = 1 , z = ch-1/2 = 1, z>=1 , j-- , print(j), z--
  op : 2

   k = 1 ; k <= gaps / 2 : 2 <= 3, k++
   op : gap gap

   i++
*/