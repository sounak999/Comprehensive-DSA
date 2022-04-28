#include <iostream>
using namespace std;
int main()
{
    int n, sp;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }

        // spaces
        sp = 2 * (i - 1);
        while (sp--)
        {
            cout << "  ";
        }

        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // spaces
        sp = 2 * (n - i);
        while (sp--)
        {
            cout << "  ";
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}