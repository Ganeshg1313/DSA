#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int findLength(char ch[]){

    // int count = 0;
    int index = 0;
    while(ch[index] != '\0'){
        // count++;
        index++;
    }
    // return count;
    return index;
}

void reverseString(char ch[]){

    int start = 0;
    int end = strlen(ch) - 1;

    while(start <= end){
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

void toUpperCase(char ch[]){
    
    int index = 0;

    while(ch[index] != '\0'){
        char currChar = ch[index];
        if(currChar >= 'a' && currChar <= 'z'){
            ch[index] = currChar - 'a' + 'A';
        }
        index++;
    }
}

void replaceWithSpace(char ch[]){
    int index = 0;

    while(ch[index] != '\0'){
        char currChar = ch[index];
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

bool isPalindrome(char ch[]){

    int left = 0;
    int right = strlen(ch) - 1;
    bool flag = true;

    while(left <= right){
        if(ch[left] != ch[right]){
            flag = false;
        }
        left++;
        right--;
    }
    return flag;
}

int main()
{
    
    char ch[100];

    cout<<"Enter the characters : "<<endl;
    // cin>>ch;
    cin.getline(ch, 100); // It will only break when you will hit ENTER

    // cout<<"You Entered : "<<ch<<endl;

    // cout<<"The length of the string is : "<<strlen(ch)<<endl;
    // cout<<"The length of the string is : "<<findLength(ch)<<endl;

    // reverseString(ch);
    // cout<<"The reversed string : "<<ch<<endl;

    // strrev(ch); // in-built func (utility func)
    // cout<<"The reversed string : "<<ch<<endl;

    // toUpperCase(ch);
    // cout<<"After UpperCase : "<<ch<<endl;

    // replaceWithSpace(ch);
    // cout<<"After UpperCase : "<<ch<<endl;

    int result = isPalindrome(ch);
    if(result){
        cout<<"Yes it's a Palindrome";
    }else{
        cout<<"No!!! it's not a planidrome";
    }

    return 0;
}