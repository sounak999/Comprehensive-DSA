#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        int sp = n - i;
        while (sp--)
        {
            cout << "  ";
        }

        // numbers with spaces
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k++ << " ";
        }

        k -= 2;
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << k-- << " ";
        }

        cout << endl;
    }
    return 0;
}