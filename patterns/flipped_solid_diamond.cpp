#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    // part-1
    for (int row = 0; row < n; row++)
    {

        // inverted-pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        // full-pyramid
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }

        // inverted-pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // part-2
    for (int row = 0; row < n; row++)
    {

        // half-pyramid
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }

        // full-pyramid
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << "  ";
        }

        // half-pyramid
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}