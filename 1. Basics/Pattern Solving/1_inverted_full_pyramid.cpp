#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // spaces
        int k = n-i;
        while (k--)
        {
            cout << " ";
        }

        // stars
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}