/*
Rahul copies in the exam from his adjacent students. But he doesn’t want to be caught, so he changes words keeping the letter constant. That means he interchanges the positions of letters in words. You are the examiner and you have to find if he has copied a certain word from the one adjacent student who is giving the same exam, and give Rahul the markings he deserves.

Note that: Uppercase and lowercase are the  same.

Input Format:

First line with the adjacent student’s word

Second line with Rahul’s word

Output Format:

0 if not copied

1 if copied

Constraints:

1<=Length of string<=10^6

Sample Input:

CAR

ACR

Sample Output:

1
*/

#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string s1 = "RAC";
    string s2 = "CR";
    if(s1.length() != s2.length()){
        cout<<"0";
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<< (s2==s1);
}