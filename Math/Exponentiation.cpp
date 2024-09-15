#include <iostream>
using namespace std;

//TC : O(b)
int slowExpo(int a, int b){
  int ans = 1;
  for(int i = 0; i < b; i++){
    ans *= a;
  }
  return ans;
}

//TC : O(log b)
//We can use the following  : 
// If b is even, then a^b = (a^(b/2))^2
// If b is odd, then a^b = a * (a^(b/2))^2
int fastExpo(int a, int b){
  int ans = 1;
  while(b > 0){
    if(b & 1){
      //Only if odd
      ans = ans * a;
    }
      //This must be done 
      ans = a * a;
      b = b >>1; //Divide by 2
    }

  return ans;
}

int main() { 

  int a = 5;
  int b = 4;
  cout <<"Slow Expo Ans : "<<slowExpo(a, b)<<endl;
  cout <<"Fast Expo Ans : "<<fastExpo(a, b)<<endl;
  
}