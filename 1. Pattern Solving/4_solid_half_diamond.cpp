#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int k = n - 1;
    while (k >= 1)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }

        cout << endl;
        k--;
    }

    return 0;
}