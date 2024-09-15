#include <iostream>
using namespace std;

int countSetBitUsingDivide(int n){
  int count = 0;
  while(n>0){
    int rem = n % 2; 
    if(rem == 1){
      count++;
    }
    n = n/2;
  }
  return count;
}

int countSetBitUsingBitwise(int n){
  int count = 0;
  while(n>0){
    int res = n & 1;
    if(res == 1){
      count++;
    }
    n>>=1;
  }
  return count;
}

int countSetBitUsingBestWay(int n){
  int count = 0;
  while(n>0){
    n = n & (n-1);
    count++;
  }
  return count;
}


int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int res1 = countSetBitUsingDivide(n);
  int res2 = countSetBitUsingBitwise(n);
  int res3 = countSetBitUsingBestWay(n);
  cout<<"Set bit count is using divide : "<<res1;
  cout<<"\nSet bit count is using bitwise : "<<res2;
  cout<<"\nSet bit count is using best way : "<<res3;
}