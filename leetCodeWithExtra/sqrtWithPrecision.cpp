#include<iostream>
using namespace std;

int findSqrt(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    
    while(s<=e){
        long int mid = s + (e - s) / 2;
        long int mul = mid*mid;
        if(mul == n){
            return mid;
        }
        else if(mul < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

double myPrecisionSqrt(int n){

    double sqrt = findSqrt(n);
    int precision = 10;
    double step = 0.1;
    int i = 0;
    while(i<precision){
        double j = sqrt;
        while(j*j <= n){
            sqrt = j;
            j += step;
        }
        step = step / 10;
        i++;
    }
    return sqrt;
}


int main()
{
    int n = 51;
    double sqrt = myPrecisionSqrt(n);
    //cout<<sqrt; //it will not print after 5 precisions
    printf("%0.10f",sqrt);
    return 0;
}