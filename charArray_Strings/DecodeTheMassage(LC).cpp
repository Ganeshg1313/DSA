// Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
// Output: "this is a secret"
// Explanation: The diagram above shows the substitution table.
// It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".

//THIS CODE WORKS ON THE LEETCODE PLATFORM

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

string decode(string key, string message){
  //create mapping
  char start = 'a';
  char mapping[280] = {0};


  for(auto ch:key){
      if(ch != ' ' && mapping[ch] == 0){
          mapping[ch] = start;
          start++;
      }
  }
  //use mapping
  string ans;


  for(auto ch:message){
      if(ch == ' '){
          ans.push_back(' ');
      }
      else{
          char decodedChar = mapping[ch];
          //ch is working as index to extract the stored value at the index suppose we are finding mapping for 'a' then it will look for the 97 indexed value
          ans.push_back(decodedChar);
      }
  }
  return ans;
}

int main() { 
  string key = "the quick brown fox jumps over the lazy dog";
  string message = "vkbs bs t suepuv";

  string ans = "";
  ans = decode(key, message);
  cout << ans << endl;
}