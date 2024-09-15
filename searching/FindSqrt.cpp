#include <bits/stdc++.h>
using namespace std;

float findPrecesion(int approxAns, int n, int precisionCount, float decimal){
  float ans = approxAns;
  float target = n;
  float s = approxAns;
  float e = approxAns + decimal;
  float mid = approxAns;
  float mul = 0;
  while(s <= e){
    mid =  s + (e-s) / 2;
    double scale = pow(10.0, precisionCount);
    scale = round(mid * scale) / scale;
    mul = mid * scale;
    if(mul <= target){
      ans = mid;
      s = mid + decimal/10;
    }
    else if(mul > target){
      e = mid - decimal/10;
    }
    else{
      s = mid + decimal/10;
    }
    
  }
  
  return ans; 
}

float findSquareRoot(int n, int precisionCount){
  int s = 0;
  int e = n;
  int mid = 0;
  float ans = -1;
  long long int mul = 0;
  while(s<=e){
    mid = s + (e-s)/2;
    mul = mid*mid;
    if(mul <= n){
      ans = mid;
      s = mid+1;
    }
    else if(mul > n){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }
  float decimal = 1;
  while(precisionCount > 0){
    ans = findPrecesion(ans, n, precisionCount, decimal);
    decimal = decimal/10;
    cout<<"decimal: "<<decimal<<" pc : "<<precisionCount<<" ANS : "<<ans<<endl;

    precisionCount--;
  }

  //pc : 3, decimal : 0.1
  //pc : 2, decimal : 0.01
  //pc : 1, decimal : 0.001
  
  return ans;
}

int main() {
  int n = 68;

  float res = findSquareRoot(n, 3);
  cout << res << endl;
}