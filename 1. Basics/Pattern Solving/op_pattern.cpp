#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int k = n;
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            if (i == 1 || i == (2 * n - 1))
            {
                cout << k;
            }
            // for the upper half
            else if (i <= n)
            {
                cout << k;
                // decreasing part
                if (j < i)
                    k--;
                // increasing part
                else if (j >= (2 * n - i))
                    k++;
            }
            // for the lower half
            else
            {
                cout << k;
                // decreasing part
                if (j <= (2 * n - 1) - i)
                {
                    k--;
                }
                // increasing part
                else if (j >= i)
                {
                    k++;
                }
            }
        }

        cout << endl;
    }
    return 0;
}