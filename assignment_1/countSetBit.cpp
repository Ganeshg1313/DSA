#include <iostream>
using namespace std;

int CountSetBit(int n){
    int count = 0;
    while(n>0){
        int k = n % 2;
        if(k==1){
            count++;
        }
        n = n / 2;
    }
    return count;
    
}

int main()
{
    int res = CountSetBit(10);
    cout<<res;
    return 0;
}