#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        int k = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            if (i == n)
                cout << j << " ";
            else if (j == 1)
                cout << k << " ";
            else if (j == i)
                cout << n << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
    return 0;
}