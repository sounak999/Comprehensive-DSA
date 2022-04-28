#include <iostream>
using namespace std;
int main()
{
    /*
     *
     * 1 *
     * 1 2 1 *
     * 1 2 3 2 1 *
     * 1 2 1 *
     * 1 *
     *
     */

    int n;
    cin >> n;

    cout << "* " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "* ";
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        j -= 1;
        while (--j)
        {
            cout << j << " ";
        }

        cout << "*" << endl;
    }


    for (int i = n - 1; i >= 1; i--)
    {
        cout << "* ";
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        j -= 1;
        while (--j)
        {
            cout << j << " ";
        }

        cout << "*" << endl;
    }

    cout << '*' << endl;

    return 0;
}