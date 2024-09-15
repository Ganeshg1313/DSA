#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 0; row < 2 * n; row++)
    {
        int cond = row < n ? row : 0;
        int space_count = row < n ? 2 * (n - cond - 1) : 0;

        for (int col = 0; col < 2 * n; col++)
        {
            if (col <= cond)
            {
                cout << "*";
            }
            else if (space_count > 0)
            {
                cout << " ";
                space_count--;
            }
            else
            {
                cout << "*";
            }
        }

        cout<<endl;
    }

    return 0;
}
