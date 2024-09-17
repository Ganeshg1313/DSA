/*
Question 1: Mr. Robot’s Password
Mr. Robot is making a website, in which there is a tab to create a password. As with other websites, there are rules so that the password gets complex and none can predict the password for another. So he gave some rules like:

– At least one numeric digit

– At Least one Small/Lowercase Letter

– At Least one Capital/Uppercase Letter

– Must not have space

– Must not have slash (/)

– At least 6 characters

If someone inputs an invalid password, the code prints: “Invalid password, try again”.

Otherwise, it prints: “password valid”.

Input Format:

A line with a given string as a password

Output Format:

If someone inputs an invalid password, the code prints: “Invalid password, try again”.

Otherwise, it prints: “password valid”, without the quotation marks.

Constraints:

Number of characters in the given string <=10^9

Sample input 1:

abjnlL09

Sample output 1:

password valid

Sample input 2:

jjnaskpk

Sample output 2:

Invalid password, try again
*/

#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int CheckPassword(char str[], int n)
{
    if (n < 4)
        return 0;
    int a = 0, cap = 0, nu = 0, low = 0;
    while (a < n)
    {
        if (str[a] == ' ' || str[a] == '/')
            return 0;
        if (str[a] >= 65 && str[a] <= 90)
        {
            cap++;
        }
        if (str[a] - 32 >= 65 && str[a] - 32 <= 90)
        {
            low++;
        }
        else if (str[a] - '0' >= 0 && str[a] - '0' <= 9)
            nu++;
        a++;
    }
    return cap > 0 && nu > 0 && low > 0;
}
int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    char *c = &s[0];
    if (CheckPassword(c, len))
        cout << "password valid";
    else
        cout << "Invalid password, try again";
}