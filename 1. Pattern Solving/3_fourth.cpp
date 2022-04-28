#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // stars
        int st = 2 * n - i - 1;
        while (st--)
        {
            cout << "*";
        }

        // numbers with stars
        for (int j = 1; j <= i; j++)
        {
            cout << i << "*";
        }

        st = 2 * n - i - 1;
        while (st--)
            cout << "*";

        cout << endl;
    }
    return 0;
}