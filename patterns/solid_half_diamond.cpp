#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;

    }

    for (int row = n-1; row > 0; row--)
    {
        for (int col = 0; col <= row-1; col++)
        {
            cout << "* ";
        }

        cout << endl;

    }



    return 0;
}