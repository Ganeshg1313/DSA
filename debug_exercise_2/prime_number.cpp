#include<iostream>
using namespace std;

void isPrime(int n){

    bool flag = 1;

    for(int i = 2 ; i <= n; i++){
        for(int j = 2 ; j <= i ; j++){
            if(i % j == 0) {
            flag = 0;
            }
        }
        if(flag == 1){
            cout<<i<<endl;
        }
        
    }


}

int main()
{
    int n;
    cin>>n;

    isPrime(n);

   

    return 0;
}