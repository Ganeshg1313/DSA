#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        // space
        for (int s = 0; s < n-i; s++)
        {
            cout << " ";
        }

        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / j;
        }
        cout << endl;
    }
    return 0;
}