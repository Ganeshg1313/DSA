#include<iostream>
using namespace std;


int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}

