#include <iostream>
#include <string.h>
using namespace std;

void convert(char ch[]){
  for(int i = 0 ; i < strlen(ch) ; i++){
    if(ch[i] == '@'){
      ch[i] = ' ';
    }
  }
}

int main() { 

  char ch[100];

  cin.getline(ch,100);

  convert(ch);

  cout<<ch;
  
}