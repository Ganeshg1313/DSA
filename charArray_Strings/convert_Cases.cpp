#include <iostream>
#include <string.h>
using namespace std;

void toUpperCase(char ch[]) {
  for (int i = 0; i < strlen(ch); i++) {
    if (ch[i] >= 'a' && ch[i] <= 'z') {
      ch[i] = ch[i] - 'a' + 'A';
    }
  }
}
void toLowerCase(char ch[]) {
  for (int i = 0; i < strlen(ch); i++) {
    if (ch[i] >= 'A' && ch[i] <= 'Z') {
      ch[i] = ch[i] - 'A' + 'a';
    }
  }
}

int main() {

  char ch[100];

  cin.getline(ch, 100);

  toLowerCase(ch);

  cout << ch;
}