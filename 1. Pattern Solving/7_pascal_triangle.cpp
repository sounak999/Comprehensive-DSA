#include <iostream>
using namespace std;
int main()
{
    int n, res, div, mul;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == n)
            {
                cout << 1 << " ";
                res = 1, mul = i - 1, div = 1;
            }
            else
            {
                res *= mul--;
                res /= div++;
                cout << res << " ";
            }
        }

        cout << endl;
    }

    return 0;
}