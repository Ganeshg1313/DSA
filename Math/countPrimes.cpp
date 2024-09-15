#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n){
  if(n<=1){
    return false;
  }
  int sqrtN = sqrt(n);
  for(int i=2;i<=sqrtN;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int countPrime(int n){
  int count = 0;

  for(int i = 0 ; i < n ; i++){
    bool res = isPrime(i);
    if(res){
      count++;
    }
  }
  return count;
}

int countPrimeUsingSieve(int n){
  //Sieve of Eratosthenes : 
  //1. Create a boolean array of size n and initialize all elements as true.
  //2. Mark 0 and 1 as false.
  //3. Now iterate from 2 to n and mark all multiples of i as false.
  //4. Print all prime numbers.
  //T.C : O(n * log(log n))
  
  if(n == 0) return 0;
  vector<bool> prime(n, true);
  prime[0] = prime[1] = false;

  int count = 0;
  
  // for(int i = 2 ; i < n ; i++){ 
  // suppose my n is 25 and I reached till i = 5 then If I continue the loop from here I will get j > 25(n) which is of no use 
  // Ex : i = 5 and j = 5 * 5 = 25 >= 25
  // So instead of it I will run the loop till sqrt(n)
  // As we are returning count we can't use it because it will not count the rest so he I was returning vector of primes than I can use that
  for(int i = 2 ; i < n ; i++){
    if(prime[i]){
      count++;

      // int j = 2*i; //It will again check for the non-primes which are already marked as false.
      //Ex : i = 2,4,6, 8, 10, 12, 14, 16, 18, 20,
      //As I am starting from 2*i then 2*2 = 4 
      // But when i = 3, I dont have to check for 4,6,8,10,12,14,16,18,20 as it is already marked as false.
      // So if I start form j = 3 * 3 then I can save the time to mark the 4 and 6 as false.
      int j = i*i;
      while(j<n){
        prime[j] = false;
        j += i;
      }
    }
  }
  return count;
}

int main() { 
  int n = 21;
  // int resCount = countPrime(n);
  int resCount = countPrimeUsingSieve(n);
  //Segmented Sieve Pending
  cout<<resCount;
}