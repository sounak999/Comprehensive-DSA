#include <iostream>
using namespace std;
int main()
{
    /*
        3
        4 4
        5 5 5
        6 6 6 6
        5 5 5
        4 4
        3
    */
    int n, k = 3;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
        }

        k++;
        cout << endl;
    }

    k -= 2;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
        }

        k--;
        cout << endl;
    }
    return 0;
}