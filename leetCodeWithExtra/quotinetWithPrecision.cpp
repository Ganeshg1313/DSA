// Quotient * Divisor + Reminder = Dividend 
// To simplify (and we don't have the reminder) so we will only use Q * Divisor = Dividend
// The range will be in between 0 to Dividend
// we will substitute every generated mid with the quotient in the formula and will check if we are getting the possible answer means the dividend is less than the actual number then we will store it and shift to right
// If the dividend is greater than the actual number then shift to left
//We need to check for every possible combination of positive and negative
//To handle this we will only perform operation using positive number and will check if we need to return the negative answer before diplaying the answer to the user



#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int s = 0;
    int e = dividend;
    int ans = -1;

    int mid = s + ( e - s ) / 2;

    while(s<=e){
        if(mid * divisor == dividend){
            return mid;
        }
        else if(mid * divisor < dividend){
            ans = mid;
            s= mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s ) / 2;
    }
    return ans;
}

double myPrecisionQuotient(int divisor, int dividend){
    double quotient = getQuotient(divisor, dividend);
    double step = 0.1;
    int precision = 5;
    int i = 0;
    while(i<precision){
        double j = quotient;
        while(j*divisor <= dividend){
            quotient = j;
            j += step;
        }
        step /= 10;
        i++;
    }
    return quotient;
}

int main()
{
    int divisor = 7;
    int dividend = 29;

    double ans = myPrecisionQuotient(abs(divisor), abs(dividend));

    if(divisor > 0 && dividend < 0 || divisor < 0 && dividend > 0){
        ans = 0 - ans;
    }

    cout<<"Final Ans is : "<<ans;

    return 0;
}