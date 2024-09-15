//Debug the code. Print reverse of a number.

#include<iostream>
using namespace std;

int main() {
	int n,a=0;
	cin>>n;
    int z = n,digits=0;
    while(z!=0 || z==0){
        z = z/10;
        digits++;
    }
    while(n!=0){
        int k = n%10,z=digits-1;
        while(z--){
            k = k*10;
        }
        a = a + k;
        digits--;
        n = n/10;
    }
    cout<<a;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {

//   int n, reversed_number = 0, remainder;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

//   return 0;
// }